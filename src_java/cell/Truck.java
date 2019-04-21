package cell;


import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;
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
    public void interact(Player P, Stage root){
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
        StackPane s = new StackPane();
        Rectangle r = new Rectangle();
        r.setFill(Color.GREEN);
        Image img = new Image(getClass().getResourceAsStream("/assets/truck.png"));
        ImageView im = new ImageView();
        im.setImage(img);
        im.setFitHeight(20);
        im.setFitWidth(35);
        im.setCache(true);
        im.setPreserveRatio(true);
        s.getChildren().addAll(r,im);
        r.widthProperty().bind(s.prefWidthProperty());
        r.heightProperty().bind(s.prefHeightProperty());
        return s;
    }
}
