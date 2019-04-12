public class ChickenEgg extends FarmProduct {
    /**
     * Default constructor
     */
    public ChickenEgg(){
        setHarga(5000);
    }

    /**
     * User-defined constructor
     * @param h nilai harga yang diinginkan
     */
    public ChickenEgg(int h){
        setHarga(h);
    }

    /**
     * Nama objek
     * @return "Chicken Egg"
     */
    public String toString(){
        return "Chicken Egg";
    }
}
