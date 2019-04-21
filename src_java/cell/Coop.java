package cell;

import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;

public class Coop extends Land {
    /**
     * Mengembalikan karakter representasi Coop
     * @return '#' jika ada rumput, 'o' jika tidak ada rumput
     */
    public char render(){
        if(getHasGrass()){
            return '#';
        } else {
            return 'o';
        }
    }

    /**
     * Mengembalikan karakter representasi rumput pada Coop
     * @return '#'
     */
    public char getGrassChar(){
        return '#';
    }

    public StackPane renderImg(){
        Rectangle r = new Rectangle();
        r.setFill(Color.SANDYBROWN);
        StackPane s = new StackPane();
        if (getHasGrass()){
            Image grassimg = new Image(getClass().getResourceAsStream("/assets/grass.png"));
            ImageView im = new ImageView();
            s.getChildren().addAll(r,im);
            im.setImage(grassimg);
            im.setCache(true);
            im.setPreserveRatio(true);
            im.fitWidthProperty().bind(s.prefWidthProperty());
            im.fitHeightProperty().bind(s.prefHeightProperty());
        }
        else {
            s.getChildren().addAll(r);
        }
        r.widthProperty().bind(s.prefWidthProperty());
        r.heightProperty().bind(s.prefHeightProperty());
        return s;
    }
}
