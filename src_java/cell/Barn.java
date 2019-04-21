package cell;

import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import javafx.scene.shape.Rectangle;
import javafx.scene.paint.Color;

public class Barn extends Land {
    /**
     * Mengembalikan karakter representasi Barn
     * @return '@' jika ada rumput, 'x' jika tidak ada rumput
     */
    public char render(){
        if(getHasGrass()){
            return '@';
        } else {
            return 'x';
        }
    }

    /**
     * Mengembalikan karakter representasi rumput pada Barn
     * @return '@'
     */
    public char getGrassChar(){
        return '@';
    }

    public StackPane renderImg(){
        Rectangle r = new Rectangle();
        r.setFill(Color.GREENYELLOW);
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
