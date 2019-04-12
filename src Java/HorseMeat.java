public class HorseMeat extends FarmProduct {
    /**
     * Default constructor
     */
    public HorseMeat(){
        setHarga(30000);
    }

    /**
     * User-defined constructor
     * @param h nilai harga yang diinginkan
     */
    public HorseMeat(int h){
        setHarga(h);
    }

    /**
     * Nama objek
     * @return "Horse Meat"
     */
    public String toString(){
        return "Horse Meat";
    }
}
