public class GoatMeat extends FarmProduct {
    /**
     * Default constructor
     */
    public GoatMeat(){
        setHarga(20000);
    }

    /**
     * User-defined constructor
     * @param h nilai harga yang diinginkan
     */
    public GoatMeat(int h){
        setHarga(h);
    }

    /**
     * Nama objek
     * @return "Goat Meat"
     */
    public String toString(){
        return "Goat Meat";
    }
}
