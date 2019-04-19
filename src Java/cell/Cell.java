package cell;

import renderable.Renderable;

public abstract class Cell implements Renderable {
    protected int coolDownTruck; // Digunakan untuk memeriksa availability kelas turunan Truck
    protected boolean hasFacility; // Digunakan untuk memeriksa availability Facility pada suatu Cell
    protected boolean hasGrass; // Digunakan untuk memeriksa availability rumput pada suatu Cell

    /**
     * Default constructor
     */
    public Cell(){
        coolDownTruck = 0;
        hasFacility = false;
        hasGrass = false;
    }

    /**
     * User-defined constructor
     * @param cd nilai coolDownTruck yang diinginkan
     * @param hf nilai hasFacility yang diinginkan
     * @param hg nilai hasGrass yang diinginkan
     */
    public Cell(int cd, boolean hf, boolean hg){
        coolDownTruck = cd;
        hasFacility = hf;
        hasGrass = hg;
    }

    /**
     * Menumbuhkan rumput pada suatu Cell
     */
    public void grow(){
        setHasGrass(true);
    }

    /**
     * Getter coolDownTruck
     * @return coolDownTruck
     */
    public int getCoolDownTruck(){
        return coolDownTruck;
    }

    /**
     * Setter coolDownTruck
     * @param cd nilai coolDownTruck yang diinginkan
     */
    public void setCoolDownTruck(int cd){
        coolDownTruck = cd;
    }

    /**
     * Getter hasFacility
     * @return hasFacility
     */
    public boolean getHasFacility(){
        return hasFacility;
    }

    /**
     * Setter hasFacility
     * @param hf nilai hasFacility yang diinginkan
     */
    public void setHasFacility(boolean hf){
        hasFacility = hf;
    }

    /**
     * Getter hasGrass
     * @return hasGrass
     */
    public boolean getHasGrass(){
        return hasGrass;
    }

    /**
     * Setter hasGrass
     * @param hg nilai hasGrass yang diinginkan
     */
    public void setHasGrass(boolean hg){
        hasGrass = hg;
    }

    /**
     * dummy function
     * @return 0
     */
    public char getGrassChar(){
        return 0;
    }

}
