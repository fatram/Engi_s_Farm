public class Duck extends FarmAnimal {
    /**
     * Default constructor
     */
    public Duck(){
        super(false, true, false, 12, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Duck(int x, int y){
        super(false, true, false, 12, x, y);
    }

    /**
     * Mencetak representasi suara bebek
     */
    public void bersuara(){
        System.out.println("Kwek kwek");
    }

    /**
     * Mengembalikan karakter representasi bebek
     * @return 'B'
     */
    public char render(){
        return 'B';
    }

    /**
     * Mengembalikan FarmProduct ketika pemain berinteraksi dengan bebek
     * @return objek DuckEgg
     */
    public FarmProduct interact(){
        return new DuckEgg();
    }
}
