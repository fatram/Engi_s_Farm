public abstract class Land extends Cell {
    /**
     * Default constructor
     */
    public Land(){
        super(0, false, false);
    }

    /**
     * Do nothing
     * @param P objek Player
     */
    public void interact(Player P){}
}
