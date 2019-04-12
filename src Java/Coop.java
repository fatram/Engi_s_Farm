public class Coop extends Land {
    /**
     * Mengembalikan karakter representasi Coop
     * @return '#' jika ada rumput, 'o' jika tidak ada rumput
     */
    public char render(){
        if(getHasGrass()){
            return '#';
        } else {
            return 'o';
        }
    }

    /**
     * Mengembalikan karakter representasi rumput pada Coop
     * @return '#'
     */
    public char getGrassChar(){
        return '#';
    }
}
