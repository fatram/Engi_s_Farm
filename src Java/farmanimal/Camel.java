package farmanimal;

import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import product.CamelMilk;
import product.FarmProduct;

public class Camel extends FarmAnimal {
    /**
     * Default constructor
     */
    public Camel(){
        super(false, false, true, 15, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Camel(int x, int y){
        super(false, false, true, 15,  x, y);
    }

    /**
     * Mencetak representasi suara unta
     */
    public String bersuara(){

        return "Owe owe";
    }

    /**
     * Mengembalikan karakter representasi unta
     * @return 'U'
     */
    public char render(){
        return 'U';
    }

    public StackPane renderImg(){
        StackPane s = new StackPane();
        Image img = new Image(getClass().getResourceAsStream("/assets/camel.png"));
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
     * Memberikan susu unta ketika pemain berinteraksi dengan unta
     * @return objek CamelMilk
     */
    public FarmProduct interact(){
        return new CamelMilk();
    }
}
