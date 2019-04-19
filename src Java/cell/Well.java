package cell;

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
}
