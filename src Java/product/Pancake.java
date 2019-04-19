package product;
public class Pancake extends SideProduct {
    /**
     * Default constructor
     */
    public Pancake(){
        setHarga(70000);
    }

    /**
     * User-defined constructor
     * @param h nilai harga yang diinginkan
     */
    public Pancake(int h){
        setHarga(h);
    }

    /**
     * Nama objek
     * @return "Pancake"
     */
    public String toString(){
        return "Pancake";
    }
}
