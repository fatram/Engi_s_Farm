package farmanimal;

import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import product.FarmProduct;
import product.GoatMeat;

public class Goat extends FarmAnimal {
    /**
     * Default constructor
     */
    public Goat(){
        super(true, false, false, 14, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Goat(int x, int y){
        super(true, false, false, 14, x, y);
    }

    /**
     * Mencetak representasi suara kambing
     */
    public String bersuara(){
        return "Mbeeee";
    }

    /**
     * Mengembalikan karakter representasi kambing
     * @return 'K'
     */
    public char render(){
        return 'K';
    }

    public StackPane renderImg(){
        StackPane s = new StackPane();
        Image img = null;
        if (isHungry()){
            img = new Image(getClass().getResourceAsStream("/assets/goatwarn.png"));
        }
        else {
            img = new Image(getClass().getResourceAsStream("/assets/goat.png"));
        }
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
     * Mengembalikan FarmProduct ketika pemain berinteraksi dengan kambing
     * @return objek GoatMeat
     */
    public FarmProduct interact(){
        return new GoatMeat();
    }
}
