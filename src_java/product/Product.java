package product;
public abstract class Product {
    protected int harga; // harga suatu Product

    /**
     * Default constructor
     */
    public Product(){
        harga = 0;
    }

    /**
     * User-defined constructor
     * @param h nilai harga yang diinginkan
     */
    public Product(int h){
        harga = h;
    }

    /**
     * Metode abstrak untuk mendapatkan nama tiap kelas turunannya
     * @return nama tiap kelas turunannya
     */
    public abstract String toString();

    /**
     * Setter harga
     * @param h nilai harga yang diinginkan
     */
    public void setHarga(int h){
        harga = h;
    }

    /**
     * Getter harga
     * @return harga
     */
    public int getHarga(){
        return harga;
    }
}
