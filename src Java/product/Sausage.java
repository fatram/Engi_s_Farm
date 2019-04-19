package product;
public class Sausage extends SideProduct {
    /**
     * Default constructor
     */
    public Sausage(){
        setHarga(50000);
    }

    /**
     * User-defined constructor
     * @param h nilai harga yang diinginkan
     */
    public Sausage(int h){
        setHarga(h);
    }

    /**
     * Nama objek
     * @return "Sausage"
     */
    public String toString(){
        return "Sausage";
    }
}
