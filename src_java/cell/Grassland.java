package cell;

import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;

public class Grassland extends Land {
    /**
     * Mengembalikan karakter representasi Grassland
     * @return '&' jika berumput, '-' jika tak berumput
     */
    public char render(){
        if(getHasGrass()){
            return '&';
        } else {
            return '-';
        }
    }

    /**
     * Mengembalikan karakter representasi rumput pada Grassland
     * @return '&'
     */
    public char getGrassChar(){
        return '&';
    }

    public StackPane renderImg(){
        Rectangle r = new Rectangle();
        r.setFill(Color.GREEN);
        StackPane s = new StackPane();
        if (getHasGrass()){
            Image grassimg = new Image(getClass().getResourceAsStream("/assets/grass.png"));
            ImageView im = new ImageView();
            im.setImage(grassimg);
            im.setCache(true);
            im.setPreserveRatio(true);
            im.fitWidthProperty().bind(s.prefWidthProperty());
            im.fitHeightProperty().bind(s.prefHeightProperty());
            s.getChildren().addAll(r,im);
        }
        else {
            s.getChildren().addAll(r);
        }
        r.widthProperty().bind(s.prefWidthProperty());
        r.heightProperty().bind(s.prefHeightProperty());
        return s;
    }
}
