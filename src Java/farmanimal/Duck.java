package farmanimal;

import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import product.DuckEgg;
import product.FarmProduct;

public class Duck extends FarmAnimal {
    /**
     * Default constructor
     */
    public Duck(){
        super(false, true, false, 12, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Duck(int x, int y){
        super(false, true, false, 12, x, y);
    }

    /**
     * Mencetak representasi suara bebek
     */
    public void bersuara(){
        System.out.println("Kwek kwek");
    }

    /**
     * Mengembalikan karakter representasi bebek
     * @return 'B'
     */
    public char render(){
        return 'B';
    }

    public StackPane renderImg(){
        StackPane s = new StackPane();
        Image img = new Image(getClass().getResourceAsStream("/assets/duck.png"));
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
     * Mengembalikan FarmProduct ketika pemain berinteraksi dengan bebek
     * @return objek DuckEgg
     */
    public FarmProduct interact(){
        return new DuckEgg();
    }
}
