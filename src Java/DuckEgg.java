public class DuckEgg extends FarmProduct {
    /**
     * Default constructor
     */
    public DuckEgg(){
        setHarga(8000);
    }

    /**
     * User-defined constructor
     * @param h nilai harga yang diinginkan
     */
    public DuckEgg(int h){
        setHarga(h);
    }

    /**
     * Nama objek
     * @return "Duck Egg"
     */
    public String toString(){
        return "Duck Egg";
    }
}
