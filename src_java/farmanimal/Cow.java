package farmanimal;

import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import product.CowMilk;
import product.FarmProduct;

public class Cow extends FarmAnimal {
    /**
     * Default constructor
     */
    public Cow(){
        super(false, false, true, 20, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Cow(int x, int y){
        super(false, false, true, 20, x, y);
    }

    /**
     * Mencetak representasi suara sapi
     */
    public String bersuara(){
        return "Mooooo";
    }

    /**
     * Mengembalikan karakter representasi sapi
     * @return 'S'
     */
    public char render(){
        return 'S';
    }

    public StackPane renderImg(){
        StackPane s = new StackPane();
        Image img = null;
        if (isHungry()){
            img = new Image(getClass().getResourceAsStream("/assets/cowwarn.png"));
        }
        else {
            img = new Image(getClass().getResourceAsStream("/assets/cow.png"));
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
     * Mengembalikan FarmProduct ketika pemain berinteraksi dengan sapi
     * @return objek CowMilk
     */
    public FarmProduct interact(){
        return new CowMilk();
    }
}
