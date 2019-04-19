package farmanimal;

import product.CowMilk;
import product.FarmProduct;

public class Cow extends FarmAnimal {
    /**
     * Default constructor
     */
    public Cow(){
        super(false, false, true, 20, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Cow(int x, int y){
        super(false, false, true, 20, x, y);
    }

    /**
     * Mencetak representasi suara sapi
     */
    public void bersuara(){
        System.out.println("Mooooo");
    }

    /**
     * Mengembalikan karakter representasi sapi
     * @return 'S'
     */
    public char render(){
        return 'S';
    }

    /**
     * Mengembalikan FarmProduct ketika pemain berinteraksi dengan sapi
     * @return objek CowMilk
     */
    public FarmProduct interact(){
        return new CowMilk();
    }
}
