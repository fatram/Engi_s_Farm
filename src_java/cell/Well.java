package cell;

import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;
import player.Player;

public class Well extends Facility {
    /**
     * Mengembalikan karakter representasi Well
     * @return 'W'
     */
    public char render(){
        return 'W';
    }

    public void interact(Player P, Stage root){
        P.setWater(P.getMaxWater());
    }

    public StackPane renderImg(){
        StackPane s = new StackPane();
        Rectangle r = new Rectangle();
        r.setFill(Color.GREEN);
        Image img = new Image(getClass().getResourceAsStream("/assets/well.png"));
        ImageView im = new ImageView();
        im.setImage(img);
        im.setCache(true);
        im.setPreserveRatio(true);
        im.fitWidthProperty().bind(s.prefWidthProperty());
        im.fitHeightProperty().bind(s.prefHeightProperty());
        s.getChildren().addAll(r,im);
        r.widthProperty().bind(s.prefWidthProperty());
        r.heightProperty().bind(s.prefHeightProperty());
        return s;
    }
}
