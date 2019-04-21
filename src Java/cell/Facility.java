package cell;

import javafx.stage.Stage;
import player.Player;

public abstract class Facility extends Cell {
    /**
     * Default constructor
     */
    public Facility(){
        super(0, true, false);
    }

    /**
     * method abstract interact, mengubah atribut Player
     * @param P objek Player yang diubah
     */
    public abstract void interact(Player P, Stage root);
}
