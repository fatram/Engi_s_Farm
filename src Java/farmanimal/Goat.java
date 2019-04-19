package farmanimal;

import product.FarmProduct;
import product.GoatMeat;

public class Goat extends FarmAnimal {
    /**
     * Default constructor
     */
    public Goat(){
        super(true, false, false, 14, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Goat(int x, int y){
        super(true, false, false, 14, x, y);
    }

    /**
     * Mencetak representasi suara kambing
     */
    public void bersuara(){
        System.out.println("Mbeeee");
    }

    /**
     * Mengembalikan karakter representasi kambing
     * @return 'K'
     */
    public char render(){
        return 'K';
    }

    /**
     * Mengembalikan FarmProduct ketika pemain berinteraksi dengan kambing
     * @return objek GoatMeat
     */
    public FarmProduct interact(){
        return new GoatMeat();
    }
}
