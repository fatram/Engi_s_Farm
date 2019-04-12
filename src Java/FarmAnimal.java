public abstract class FarmAnimal implements Renderable {
    protected boolean meatProducing; // indikator penghasil daging
    protected boolean eggProducing; // indikator penghasil telur
    protected boolean milkProducing; // indikator penghasil susu
    protected final int lifeSpan; // masa hidup hewan perubahan pertama
    protected int hungry; // akan menyebabkan hewan lapar jika nilainya negatif
    protected int posX; // posisi X pada papan permainan
    protected int posY; // posisi Y pada papan permainan

    /**
     * User-defined constructor
     * @param meatProducing apakah hewan penghasil daging?
     * @param eggProducing apakah hewan penghasil telur?
     * @param milkProducing apakah hewan penghasil susu?
     * @param lifeSpan masa hidup hewan yang diinginkan
     * @param posX posisi X papan yang diinginkan
     * @param posY posisi Y papan yang diinginkan
     */
    public FarmAnimal(boolean meatProducing, boolean eggProducing, boolean milkProducing, int lifeSpan, int posX, int posY) {
        this.meatProducing = meatProducing;
        this.eggProducing = eggProducing;
        this.milkProducing = milkProducing;
        this.lifeSpan = lifeSpan;
        this.posX = posX;
        this.posY = posY;
        hungry = lifeSpan;
    }

    /**
     * Getter meatProducing
     * @return meatProducing
     */
    public boolean isMeatProducing() {
        return meatProducing;
    }

    /**
     * Setter meatProducing
     * @param meatProducing nilai yang diinginkan
     */
    public void setMeatProducing(boolean meatProducing) {
        this.meatProducing = meatProducing;
    }

    /**
     * Getter eggProducing
     * @return eggProducing
     */
    public boolean isEggProducing() {
        return eggProducing;
    }

    /**
     * Setter eggProducing
     * @param eggProducing nilai yang diinginkan
     */
    public void setEggProducing(boolean eggProducing) {
        this.eggProducing = eggProducing;
    }

    /**
     * Getter milkProducing
     * @return milkProducing
     */
    public boolean isMilkProducing() {
        return milkProducing;
    }

    /**
     * Setter milkProducing
     * @param milkProducing nilai yang diingikan
     */
    public void setMilkProducing(boolean milkProducing) {
        this.milkProducing = milkProducing;
    }

    /**
     * Getter lifeSpan
     * @return lifeSpan
     */
    public int getLifeSpan() {
        return lifeSpan;
    }

    /**
     * Getter hungry
     * @return hungry
     */
    public int getHungry() {
        return hungry;
    }

    /**
     * Setter hungry
     * @param hungry nilai hungry yang diinginkan
     */
    public void setHungry(int hungry) {
        this.hungry = hungry;
    }

    /**
     * Getter posX
     * @return posX
     */
    public int getPosX() {
        return posX;
    }

    /**
     * Setter posX
     * @param posX nilai yang diinginkan
     */
    public void setPosX(int posX) {
        this.posX = posX;
    }

    /**
     * Getter posY
     * @return posY
     */
    public int getPosY() {
        return posY;
    }

    /**
     * Setter posY
     * @param posY nilai yang diinginkan
     */
    public void setPosY(int posY) {
        this.posY = posY;
    }

    /**
     * Mencetak suara hewan
     */
    public void bersuara(){
        System.out.println("Ini hewan");
    }

    /**
     * set hungry sebagai lifeSpan setelah makan
     */
    public void makan(){
        setHungry(lifeSpan);
    }

    /**
     * Cek apakah hewan lapar
     * @return true jika lapar, false jika tidak
     */
    public boolean isHungry(){
        return getHungry() < 0;
    }

    /**
     * perbarui nilai hungry tiap satu tick waktu
     */
    public void updateHungry(){
        setHungry(getHungry() - 1);
    }

    /**
     * mekanisme pergerakan hewan
     */
    public void movement(){
        while(true){
            int pilihan = (int) (Math.random()*4);
            if(pilihan == 0){
                setPosY(getPosY() + 1);
            } else if (pilihan == 1){
                setPosX(getPosX() - 1);
            } else if (pilihan == 2){
                setPosY(getPosY() - 1);
            } else if (pilihan == 3){
                setPosX(getPosX() + 1);
            }
        }
    }

    /**
     * methods abstract interact, mengembalikan FarmProduct sesuai jenis hewan
     * @return FarmProduct
     */
    public abstract FarmProduct interact();
}
