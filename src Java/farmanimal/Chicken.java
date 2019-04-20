package farmanimal;

import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import product.ChickenEgg;
import product.FarmProduct;

public class Chicken extends FarmAnimal {
    /**
     * Default constructor
     */
    public Chicken(){
        super(false, true, false, 10, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Chicken(int x, int y){
        super(false, true, false, 10, x, y);
    }

    /**
     * Mencetak representasi suara ayam
     */
    public void bersuara(){
        System.out.println("Petok petok");
    }

    /**
     * Mengembalikan karakter representasi ayam
     * @return 'A'
     */
    public char render(){
        return 'A';
    }

    public StackPane renderImg(){
        StackPane s = new StackPane();
        Image img = new Image(getClass().getResourceAsStream("/assets/chicken.png"));
        ImageView im = new ImageView();
        im.setImage(img);
        im.setCache(true);
        im.setPreserveRatio(true);
        im.fitWidthProperty().bind(s.prefWidthProperty());
        im.fitHeightProperty().bind(s.prefHeightProperty());
        s.getChildren().add(im);
        return s;
    }
    /**
     * memberikan FarmProduct ketika pemain berinteraksi dengan ayam
     * @return objek ChickenEgg
     */
    public FarmProduct interact(){
        return new ChickenEgg();
    }
}