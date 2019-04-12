public class CamelMilk extends FarmProduct {
    /**
     * Default constructor
     */
    public CamelMilk(){
        setHarga(20000);
    }

    /**
     * User-defined constructor
     * @param h nilai harga yang diinginkan
     */
    public CamelMilk(int h){
        setHarga(h);
    }

    /**
     * Nama objek
     * @return "Camel Milk"
     */
    public String toString(){
        return "Camel Milk";
    }
}
