package gameplay;

import java.util.LinkedList;

import cell.*;
import farmanimal.*;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.StackPane;
import player.Player;


public class Gameplay  {
    private Cell board[][]; // lapangan permainan, direpresentasikan dengan matriks Cell
    private LinkedList<FarmAnimal> animals; // daftar hewan
    private final int width; // lebar lapangan
    private final int height; // tinggi lapangan
    private int tick; // representasi waktu
    private Player P;

    /**
     * Default constructor
     * bentuk lapangan dan benda-benda lain
     */
    public Gameplay(){
        animals = new LinkedList<>();
        width = 11;
        height = 10;
        board = new Cell[10][11];
        P = new Player();
        P.setPosX(6);
        P.setPosY(10);
        tick = 0;
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                if(i >= 0 && i <= 2 && j >= 0 && j <= 2){
                    // inisialisasi Coop
                    board[i][j] = new Coop();
                } else if (i>=0 && i<=5 && j>=4&& j<=7){
                    //inisialisasi Barn
                    board[i][j] = new Barn();
                } else if (i == 0 && j == 10){
                    //inisialisasi Truck
                    board[i][j] = new Truck();
                } else if (i == 1 && j == 10){
                    //inisialisasiMixer
                    board[i][j] = new Mixer();
                } else if (i == 3 && j == 10){
                    //inisialisasi well
                    board[i][j] = new Well();
                } else {
                    board[i][j] = new Grassland();
                }
            }
        }
        // hardcode rumput
        board[1][1].setHasGrass(true);
        board[1][3].setHasGrass(true);
        board[2][1].setHasGrass(true);
        board[2][6].setHasGrass(true);
        board[2][7].setHasGrass(true);
        board[3][7].setHasGrass(true);
        board[7][2].setHasGrass(true);
        board[8][2].setHasGrass(true);
        board[8][3].setHasGrass(true);
        board[9][3].setHasGrass(true);
        board[9][4].setHasGrass(true);
    }

    /**
     * Getter width
     * @return width
     */
    public int getWidth() {
        return width;
    }

    /**
     * Setter height
     * @return height
     */
    public int getHeight() {
        return height;
    }

    /**
     * Getter tick
     * @return tick
     */
    public int getTick() {
        return tick;
    }

    public Player getPlayer(){
        return P;
    }
    /**
     * Setter tick
     * @param tick nilai tick yang diinginkan
     */
    public void setTick(int tick) {
        this.tick = tick;
    }

    /**
     * Mengembalikan suatu Cell dari lapangan
     * @param x index baris/tinggi dari Cell yang dicari
     * @param y index kolom/lebar dari Cell yang dicari
     * @return board[x][y]
     */
    public Cell getBoard(int x, int y){
        return board[x][y];
    }

    /**
     * Interpretasikan perintah dari pemain
     * @param c perintah pemain
     */
    public void readCommand(String c){
        if(c.equals("w")){
            if(P.getPosX()-1 >= 0 && !getBoard(P.getPosX() - 1, P.getPosY()).getHasFacility()){
                P.setPosX(P.getPosX() - 1);
                updateTick();
                getBoard(0, 10).setCoolDownTruck(getBoard(0, 10).getCoolDownTruck()+1);
                clearScreen();
                moveAnimal();
                updateAnimal();
                printBoard();
            }
        } else if(c.equals("a")){
            if(P.getPosY()-1 >= 0 && !getBoard(P.getPosX(), P.getPosY()-1).getHasFacility()){
                P.setPosY(P.getPosY() - 1);
                updateTick();
                getBoard(0, 10).setCoolDownTruck(getBoard(0, 10).getCoolDownTruck()+1);
                clearScreen();
                moveAnimal();
                updateAnimal();
                printBoard();
            }
        } else if(c.equals("s")){
            if(P.getPosX()+1 < getHeight() && !getBoard(P.getPosX() + 1, P.getPosY()).getHasFacility()){
                P.setPosX(P.getPosX() + 1);
                updateTick();
                getBoard(0, 10).setCoolDownTruck(getBoard(0, 10).getCoolDownTruck()+1);
                clearScreen();
                moveAnimal();
                updateAnimal();
                printBoard();
            }
        } else if(c.equals("d")){
            if(P.getPosY()+1 < getWidth() && !getBoard(P.getPosX(), P.getPosY()+1).getHasFacility()){
                P.setPosY(P.getPosY() + 1);
                updateTick();
                getBoard(0, 10).setCoolDownTruck(getBoard(0, 10).getCoolDownTruck()+1);
                clearScreen();
                moveAnimal();
                updateAnimal();
                printBoard();
            }
        } else if(c.equals("kill")){
            int i;
            int posX, posY;
            boolean found = false;
            int move[] = {-1, 0, 1, 0}; // pengecekan searah jarum jam
            posX = 0;
            posY = 3;
            while(!found && posX < 4){
                i = searchAnimal(P.getPosX()+move[posX], P.getPosY()+move[posY]);
                if( i != -999){
                    if(getAnimal(i).isMeatProducing()){
                        FarmAnimal a = getAnimal(i);
                        P.addBag(a.interact());
                        delAnimal(a);
                        found = true;
                        updateTick();
                        getBoard(0, 10).setCoolDownTruck(getBoard(0, 10).getCoolDownTruck()+1);
                    }
                }
                if(!found){
                    posX++;
                    posY--;
                }
            }
            clearScreen();
            printBoard();
        } else if(c.equals("interact")){
            int i;
            int posX, posY;
            boolean found = false;
            int move[] = {-1, 0, 1, 0}; // pengecekan searah jarum jam
            posX = 0;
            posY = 3;
            while(!found && posX < 4){
                // cari hewan
                i = searchAnimal(P.getPosX()+move[posX], P.getPosY()+move[posY]);
                if( i != -999){
                    if(getAnimal(i).isMilkProducing() || getAnimal(i).isEggProducing()){
                        FarmAnimal a = getAnimal(i);
                        P.addBag(a.interact());
                        found = true;
                        updateTick();
                        getBoard(0, 10).setCoolDownTruck(getBoard(0, 10).getCoolDownTruck()+1);
                    }
                }
                if(!found){
                    // cari facility
                    if (P.getPosX()+move[posX]>=0 && P.getPosX()+move[posX]<getHeight() && P.getPosY()+move[posY]>=0 && P.getPosY()+move[posY]<getWidth())
                        found = getBoard(P.getPosX()+move[posX], P.getPosY()+move[posY]).getHasFacility();
                    if (found){
                        Facility f = (Facility) getBoard(P.getPosX()+move[posX], P.getPosY()+move[posY]);
                        f.interact(P);
                        updateTick();
                        getBoard(0, 10).setCoolDownTruck(getBoard(0, 10).getCoolDownTruck()+1);
                    }
                    else {
                        posX++;
                        posY--;
                    }
                }
            }
            clearScreen();
            printBoard();
        } else if(c.equals("grow")){
            if(P.getWater() > 0) {
                if(!getBoard(P.getPosX(), P.getPosY()).getHasGrass()) {
                    getBoard(P.getPosX(), P.getPosY()).setHasGrass(true);
                    P.setWater(P.getWater() - 1);
                } else {
                    System.out.println("Anda kehabisan air");
                }
            }
            updateTick();
            printBoard();
            getBoard(0, 10).setCoolDownTruck(getBoard(0, 10).getCoolDownTruck()+1);
            clearScreen();
            printBoard();
        } else if(c.equals("talk")) {
            int i;
            int posX,posY;
            boolean found = false;
            int move[] = {-1,0,1,0}; //pengecekan searah jarum jam
            posX = 0;
            posY = 3;
            while (!found && posX<4)  {
                i = searchAnimal(P.getPosX()+move[posX],P.getPosY()+move[posY]);
                if (i != -999) {
                    getAnimal(i).bersuara();
                    found = true;
                    updateTick();
                    getBoard(0, 10).setCoolDownTruck(getBoard(0, 10).getCoolDownTruck()+1);
                }
                else {
                    posX++;
                    posY--;
                }
            }
        } else {
            if(!c.equals("exit")) {
                System.out.println("Perintah tidak tersedia");
            }
        }
    }

    /**
     * Tambahkan hewan ke animals
     * @param a hewan yang ingin ditambahkan
     */
    public void addAnimal(FarmAnimal a){
        animals.add(a);
    }

    /**
     * Kembalikan hewan pada index tertentu dari animals
     * @param i index yang diinginkan
     * @return FarmAnimal pada index i dari animals
     */
    public FarmAnimal getAnimal(int i){
        return animals.get(i);
    }

    /**
     * Kembalikan banyak hewan di dalam animals
     * @return banyak hewan di dalam animals
     */
    public int getAnimalSize(){
        return animals.size();
    }

    /**
     * Hapus suatu hewan dari animals jika hewannya ada
     * @param a hewan yang ingin dihapus
     */
    public void delAnimal(FarmAnimal a){
        animals.remove(a);
    }

    /**
     * Perbarui tick waktu, satu tambahan tick tiap satu perintah pemain
     */
    public void updateTick(){
        setTick(getTick() + 1);
    }

    /**
     * Cari hewan pada posisi x,y di lapangan
     * @param x posisi X di lapangan
     * @param y posisi Y di lapangan
     * @return indeks hewan pada animals jika ada hewan, -999 jika hewan tidak ada
     */
    public int searchAnimal(int x, int y){
        boolean found = false;
        int i = 0;
        while(!found && i < getAnimalSize()){
            if(getAnimal(i).getPosX() == x && getAnimal(i).getPosY() == y){
                found = true;
            }
            i++;
        }
        if (found) {
            return i-1;
        } else {
            return -999;
        }
    }

    /**
     * Cetak papan permainan dan status pemain melalui GUI
     */
    public GridPane showBoard(){
        int DPOINT = 50;
        GridPane root = new GridPane();
        //root.setMinSize(DPOINT,DPOINT);
        for(int i = 0; i < getHeight(); i++){
            for(int j = 0; j < getWidth(); j++){
                StackPane s = board[i][j].renderImg();
                s.setPrefSize(DPOINT,DPOINT);
                if(P.getPosX() == i && P.getPosY() == j) {
                    Image personimg = new Image(getClass().getResourceAsStream("/assets/person.png"));
                    ImageView im = new ImageView();
                    im.setImage(personimg);
                    im.setCache(true);
                    im.setPreserveRatio(true);
                    im.fitWidthProperty().bind(s.prefWidthProperty());
                    im.fitHeightProperty().bind(s.prefHeightProperty());
                    s.getChildren().add(im);
                }
                else
                if(searchAnimal(i, j) != -999){
                    s.getChildren().add(getAnimal(searchAnimal(i, j)).renderImg());
                }
                root.add(s,j,i);
            }
        }
        return root;
    }

    /**
     * Cetak papan permainan dan status pemain
     */
    public void printBoard(){
        System.out.println("Tick : " + getTick() + "\t Water : " + P.getWater() + "\t Money : " + P.getMoney());
        for(int i = 0; i < getHeight(); i++){
            for(int j = 0; j < getWidth(); j++){
                if(searchAnimal(i, j) != -999){
                    System.out.print(" | " + getAnimal(searchAnimal(i, j)).render());
                } else if(P.getPosX() == i && P.getPosY() == j){
                    System.out.print(" | P");
                } else {
                    System.out.print(" | " + getBoard(i, j).render());
                }
            }
            System.out.println(" |");
        }
        // Print daftar item di dalam bag
        System.out.println("Barang di dalam tas : ");
        if(P.getBagSize() > 0){
            for(int i = 0; i < P.getBagSize(); i++){
                System.out.println((i+1) + ". " + P.getProduct(i).toString());
            }
        } else {
            System.out.println("-");
        }
    }
    /**
     * Periksa keberadaan hewan di posisi x,y pada papan permainan
     * @param x posisi x yang dicari
     * @param y posisi y yang dicari
     * @return true jika ada, false jika tidak
     */
    public boolean isPosExist(int x, int y){
        for(int i = 0; i < getAnimalSize(); i++){
            if(x == getAnimal(i).getPosX() && y == getAnimal(i).getPosY()){
                return true;
            }
        }
        return false;
    }

    /**
     * Gerakan hewan-hewan di animals secara random
     */
    public void moveAnimal(){
        int maxrand = 100;

        if(getAnimalSize() > 0){
            for(int i = 0; i < getAnimalSize(); i++){
                boolean valid = false;
                int j = 0;
                while(!valid){
                    if(j > maxrand){
                        break;
                    }
                    int pilihan = (int) (Math.random()*4 + 1);
                    int xtemp, ytemp;
                    if(pilihan == 1){
                        xtemp = getAnimal(i).getPosX();
                        ytemp = getAnimal(i).getPosY()+1;
                    } else if(pilihan == 2){
                        xtemp = getAnimal(i).getPosX()-1;
                        ytemp = getAnimal(i).getPosY();
                    } else if(pilihan == 3){
                        xtemp = getAnimal(i).getPosX();
                        ytemp = getAnimal(i).getPosY()-1;
                    } else {
                        xtemp = getAnimal(i).getPosX()+1;
                        ytemp = getAnimal(i).getPosY();
                    }
                    if(xtemp<getHeight() && xtemp>=0 && ytemp <getWidth() && ytemp>=0 &&
                            (getBoard(getAnimal(i).getPosX(), getAnimal(i).getPosY()).render() == getBoard(xtemp, ytemp).render() || getBoard(getAnimal(i).getPosX(), getAnimal(i).getPosY()).getGrassChar() == getBoard(xtemp, ytemp).render() )&&
                            !isPosExist(xtemp,ytemp) && (xtemp!=P.getPosX() || ytemp!=P.getPosY()))
                    {
                        valid = true;
                        getAnimal(i).setPosX(xtemp);
                        getAnimal(i).setPosY(ytemp);
                    }
                    j++;
                }
            }
        }
    }


    /**
     * Perbarui kondisi hewan-hewan di dalam animals, hapus hewan dari animals jika hewan mati
     */
    public void updateAnimal(){
        for(int i = 0; i < getAnimalSize(); i++){
            getAnimal(i).updateHungry();
            if(getAnimal(i).isHungry()){
                // Kasus pertama, menginjak grass maka dimakan
                if(getBoard(getAnimal(i).getPosX(), getAnimal(i).getPosY()).getHasGrass() &&
                        getAnimal(i).isHungry()){
                    getBoard(getAnimal(i).getPosX(), getAnimal(i).getPosY()).setHasGrass(false);
                    getAnimal(i).makan();
                } else {
                    // Kasus kedua, hungry <= -5 maka mati
                    if(getAnimal(i).getHungry() <= - 5){
                        delAnimal(getAnimal(i));
                    }
                }
            }
        }
    }

    /**
     * Clear command prompt screen
     */
    public static void clearScreen(){
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }
}
