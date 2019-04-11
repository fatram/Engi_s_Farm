public class Grassland extends Land implements Renderable {
    /**
     * Mengembalikan karakter representasi Grassland
     * @return '&' jika berumput, '-' jika tak berumput
     */
    public char render(){
        if(getHasGrass()){
            return '&';
        } else {
            return '-';
        }
    }

    /**
     * Mengembalikan karakter representasi rumput pada Grassland
     * @return '&'
     */
    public char getGrassChar(){
        return '&';
    }
}
