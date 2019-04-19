package farmanimal;

import product.CamelMilk;
import product.FarmProduct;

public class Camel extends FarmAnimal {
    /**
     * Default constructor
     */
    public Camel(){
        super(false, false, true, 15, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Camel(int x, int y){
        super(false, false, true, 15,  x, y);
    }

    /**
     * Mencetak representasi suara unta
     */
    public void bersuara(){
        System.out.println("Owe owe");
    }

    /**
     * Mengembalikan karakter representasi unta
     * @return 'U'
     */
    public char render(){
        return 'U';
    }

    /**
     * Memberikan susu unta ketika pemain berinteraksi dengan unta
     * @return objek CamelMilk
     */
    public FarmProduct interact(){
        return new CamelMilk();
    }
}
