package cell;

import javafx.scene.control.Label;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import player.Player;

public class Well extends Facility {
    /**
     * Mengembalikan karakter representasi Well
     * @return 'W'
     */
    public char render(){
        return 'W';
    }

    public void interact(Player P){
        P.setWater(P.getMaxWater());
    }

    public StackPane renderImg(){
        Rectangle r = new Rectangle();
        r.setFill(Color.BLACK);
        Label lbl = new Label("W");
        lbl.setTextFill(Color.WHITE);
        StackPane s = new StackPane();
        s.getChildren().addAll(r,lbl);
        r.widthProperty().bind(s.prefWidthProperty());
        r.heightProperty().bind(s.prefHeightProperty());
        return s;
    }
}
