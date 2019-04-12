public class Chicken extends FarmAnimal {
    /**
     * Default constructor
     */
    public Chicken(){
        super(false, true, false, 10, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Chicken(int x, int y){
        super(false, true, false, 10, x, y);
    }

    /**
     * Mencetak representasi suara ayam
     */
    public void bersuara(){
        System.out.println("Petok petok");
    }

    /**
     * Mengembalikan karakter representasi ayam
     * @return 'A'
     */
    public char render(){
        return 'A';
    }

    /**
     * memberikan FarmProduct ketika pemain berinteraksi dengan ayam
     * @return objek ChickenEgg
     */
    public FarmProduct interact(){
        return new ChickenEgg();
    }
}