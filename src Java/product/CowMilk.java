package product;
public class CowMilk extends FarmProduct {
    /**
     * Default constructor
     */
    public CowMilk(){
        setHarga(10000);
    }

    /**
     * User-defined constructor
     * @param h nilai harga yang diinginkan
     */
    public CowMilk(int h){
        setHarga(h);
    }

    /**
     * Nama objek
     * @return "Cow Milk"
     */
    public String toString(){
        return "Cow Milk";
    }
}
