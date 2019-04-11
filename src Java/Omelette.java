public class Omelette extends SideProduct {
    /**
     * Default constructor
     */
    public Omelette(){
        setHarga(40000);
    }

    /**
     * User-defined constructor
     * @param h nilai harga yang diinginkan
     */
    public Omelette(int h){
        setHarga(h);
    }

    /**
     * Nama objek
     * @return "Omelette"
     */
    public String toString(){
        return "Omelette";
    }
}
