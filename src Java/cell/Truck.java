package cell;

import javafx.scene.control.Label;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import player.Player;
import product.Product;

public class Truck extends Facility {
    /**
     * Default constructor
     */
    public Truck(){
        setCoolDownTruck(10);
    }

    /**
     * User-defined constructor
     * @param cd nilai coolDownTruck yang diinginkan
     */
    public Truck(int cd){
        setCoolDownTruck(cd);
    }

    /**
     * Mengembalikan karakter representasi Truck
     * @return 'T'
     */
    public char render(){
        return 'T';
    }

    /**
     * Menjual seluruh item di dalam bag
     * @param P objek Player yang diubah
     */
    public void interact(Player P){
        Product p;
        if(getCoolDownTruck() > 10){
            while(!P.isBagEmpty()){
                p = P.getProduct(0);
                P.addMoney(p.getHarga());
                P.delBag(p);
                setCoolDownTruck(0);
            }
        } else {
            System.out.println("Truck belum bisa digunakan");
        }
    }

    public StackPane renderImg(){
        Rectangle r = new Rectangle();
        r.setFill(Color.BLACK);
        Label lbl = new Label("T");
        lbl.setTextFill(Color.WHITE);
        StackPane s = new StackPane();
        s.getChildren().addAll(r,lbl);
        r.widthProperty().bind(s.prefWidthProperty());
        r.heightProperty().bind(s.prefHeightProperty());
        return s;
    }
}
