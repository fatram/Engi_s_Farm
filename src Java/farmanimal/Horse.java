package farmanimal;

import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import product.FarmProduct;
import product.HorseMeat;

public class Horse extends FarmAnimal {
    /**
     * Default constructor
     */
    public Horse(){
        super(true, false, false, 18, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Horse(int x, int y){
        super(true, false, false, 18, x, y);
    }

    /**
     * Mencetak representasi suara kuda
     */
    public void bersuara(){
        System.out.println("Hiya hiya");
    }

    /**
     * Mengembalikan karakter representasi kuda
     * @return 'H'
     */
    public char render(){
        return 'H';
    }

    public StackPane renderImg(){
        StackPane s = new StackPane();
        Image img = new Image(getClass().getResourceAsStream("/assets/horse.png"));
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
     * Mengembalikan FarmProduct ketika pemain berinteraksi dengan kuda
     * @return objek HorseMeat
     */
    public FarmProduct interact(){
        return new HorseMeat();
    }
}
