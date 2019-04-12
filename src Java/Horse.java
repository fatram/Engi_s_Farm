public class Horse extends FarmAnimal {
    /**
     * Default constructor
     */
    public Horse(){
        super(true, false, false, 18, 0, 0);
    }

    /**
     * User-defined constructor
     * @param x posisi X hewan yang diinginkan
     * @param y posisi Y hewan yang diinginkan
     */
    public Horse(int x, int y){
        super(true, false, false, 18, x, y);
    }

    /**
     * Mencetak representasi suara kuda
     */
    public void bersuara(){
        System.out.println("Hiya hiya");
    }

    /**
     * Mengembalikan karakter representasi kuda
     * @return 'H'
     */
    public char render(){
        return 'H';
    }

    /**
     * Mengembalikan FarmProduct ketika pemain berinteraksi dengan kuda
     * @return objek HorseMeat
     */
    public FarmProduct interact(){
        return new HorseMeat();
    }
}
