public class Player {
    private int water; // banyak air yang dimiliki
    private LinkedList<Product> bag; // tas pemain
    private int posX; // posisi pemain (kolom)
    private int posY; // posisi pemain (baris)
    private final int maxWater; // nilai maksimum air
    private final int maxBag; // kapasitas maksimum tas
    private int money; // Uang yang dimilki pemain

    /**
     * Default constructor
     */
    public Player(){
        bag = new LinkedList<>();
        maxWater = 10;
        maxBag = 10;
        water = 0;
        posX = 0;
        posY = 0;
        money = 0;
    }

    /**
     * User-defined constructor
     * @param posX posisi pemain yang diinginkan (kolom)
     * @param posY posisi pemain yang diinginkan (baris)
     * @param water banyak air saat ini yang diinginkan
     * @param maxWater banyak maksimum air yang diinginkan
     * @param maxBag banyak maksimum tas yang diinginkan
     */
    public Player(int posX, int posY, int water, int maxWater, int maxBag){
        bag = new LinkedList<>();
        this.maxWater = maxWater;
        this.maxBag = maxBag;
        this.water = water;
        this.posX = posX;
        this.posY = posY;
        money = 0;
    }

    /**
     * Getter water
     * @return water
     */
    public int getWater() {
        return water;
    }

    /**
     * Setter water
     * @param water nilai water yang diinginkan
     */
    public void setWater(int water) {
        this.water = water;
    }

    /**
     * Getter posX
     * @return posX
     */
    public int getPosX() {
        return posX;
    }

    /**
     * Setter posX
     * @param posX nilai posX yang diinginkan
     */
    public void setPosX(int posX) {
        this.posX = posX;
    }

    /**
     * Getter posY
     * @return posY
     */
    public int getPosY() {
        return posY;
    }

    /**
     * Setter posY
     * @param posY nilai posY yang diinginkan
     */
    public void setPosY(int posY) {
        this.posY = posY;
    }

    /**
     * Getter maxWater
     * @return maxWater
     */
    public int getMaxWater() {
        return maxWater;
    }

    /**
     * Getter maxBag
     * @return maxBag
     */
    public int getMaxBag() {
        return maxBag;
    }

    /**
     * Getter money
     * @return money
     */
    public int getMoney() {
        return money;
    }

    /**
     * Setter money
     * @param money nilai money yang diinginkan
     */
    public void setMoney(int money) {
        this.money = money;
    }

    /**
     * Periksa kapasitas tas saat ini
     * @return kapasitas tas saat ini
     */
    public int getBagSize(){
        return bag.size();
    }

    /**
     * Menambah money
     * @param m nilai yang akan ditambahkan pada money
     */
    public void addMoney(int m){
        setMoney(getMoney() + m);
    }

    /**
     * Menambah Product ke bag
     * @param p Product yang akan ditambah
     */
    public void addBag(Product p){
        bag.add(p);
    }

    /**
     * Menyisipkan product pada index tertentu
     * @param p Product yang ingin disisipkan
     * @param i index tempat p disisipkan
     */
    public void addBag(Product p, int i){
        bag.add(i, p);
    }

    /**
     * Menghapus suatu Product dari bag
     * @param p Product yang ingin dihapus
     */
    public void delBag(Product p){
        bag.remove(p);
    }

    /**
     * Periksa apakah tas kosong
     * @return true jika tas kosong, false jika tas tidak kosong
     */
    public boolean isBagEmpty(){
        return bag.isEmpty();
    }

    /**
     * Mengambil item dari tas pada index tertentu
     * @param i index yang diinginkan
     * @return Product pada bag dengan index i
     */
    public Product getItemFromBag(int i){
        return bag.get(i);
    }
}
