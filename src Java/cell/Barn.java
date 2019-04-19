package cell;

public class Barn extends Land {
    /**
     * Mengembalikan karakter representasi Barn
     * @return '@' jika ada rumput, 'x' jika tidak ada rumput
     */
    public char render(){
        if(getHasGrass()){
            return '@';
        } else {
            return 'x';
        }
    }

    /**
     * Mengembalikan karakter representasi rumput pada Barn
     * @return '@'
     */
    public char getGrassChar(){
        return '@';
    }
}
