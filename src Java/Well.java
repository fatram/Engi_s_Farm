public class Well extends Facility implements Renderable {
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
}
