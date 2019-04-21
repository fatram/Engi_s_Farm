package cell;

import javafx.application.Platform;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.input.KeyEvent;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Font;
import javafx.stage.Modality;
import javafx.stage.Stage;
import javafx.stage.StageStyle;
import player.Player;
import product.Omelette;
import product.Pancake;
import product.Product;
import product.Sausage;

import java.util.Timer;
import java.util.TimerTask;

public class Mixer extends Facility {
    /**
     * Mengembalikan karakter representsi Mixer
     * @return 'M'
     */
    public char render(){
        return 'M';
    }

    public StackPane renderImg(){
        StackPane s = new StackPane();
        Rectangle r = new Rectangle();
        r.setFill(Color.GREEN);
        Image img = new Image(getClass().getResourceAsStream("/assets/mixer.png"));
        ImageView im = new ImageView();
        im.setImage(img);
        im.setCache(true);
        im.setPreserveRatio(true);
        im.fitWidthProperty().bind(s.prefWidthProperty());
        im.fitHeightProperty().bind(s.prefHeightProperty());
        s.getChildren().addAll(r,im);
        r.widthProperty().bind(s.prefWidthProperty());
        r.heightProperty().bind(s.prefHeightProperty());
        return s;
    }

    /**
     * Menghasilkan SideProduct dari beberapa FarmProduct
     * @param P objek Player yang diubah
     */
    public void interact(Player P, Stage root){
        GridPane s = new GridPane();
        Label lbl1 = new Label("1. Pancake" );
        Label lbli1 = new Label("   Ingredients : Chicken's Egg + Cow's Milk");
        Label lbl2 = new Label("2. Omelette");
        Label lbli2 = new Label("   Ingredients : Duck's Egg + Camel's Milk");
        Label lbl3 = new Label("3. Sausage");
        Label lbli3 = new Label("   Ingredients : Goat's Meat + Horse's Meat");
        lbl1.setFont(Font.font("PT Mono",12));
        lbl2.setFont(Font.font("PT Mono",12));
        lbl3.setFont(Font.font("PT Mono",12));
        lbli1.setFont(Font.font("PT Mono",12));
        lbli2.setFont(Font.font("PT Mono",12));
        lbli3.setFont(Font.font("PT Mono",12));
        Image bimg = new Image(getClass().getResourceAsStream("/assets/bulletsmall.png"));
        ImageView im = new ImageView();
        im.setImage(bimg);
        StackPane parent = new StackPane(s);
        parent.setStyle("-fx-background-color:  #FAEBD7; -fx-background-radius: 20; -fx-border-radius: 20; -fx-border-color: derive(cadetblue, -20%);");
        //int choice = 0;
        s.add(im,0,0);
        s.add(lbl1,1,0);
        s.add(lbli1,1,1);
        s.add(lbl2,1,2);
        s.add(lbli2,1,3);
        s.add(lbl3,1,4);
        s.add(lbli3,1,5);
        s.setVgap(5.0);
        s.setHgap(5.0);
        s.setPadding(new Insets(8));
        Scene scene=new Scene(parent);
        scene.setFill(Color.TRANSPARENT);
        Stage stage = new Stage();
        stage.initStyle(StageStyle.TRANSPARENT);
        stage.initOwner(root);
        stage.initModality(Modality.APPLICATION_MODAL);
        stage.setScene(scene);
        stage.show();

        scene.setOnKeyPressed(new EventHandler<KeyEvent>(){
            int choice = 0;
            public void handle(KeyEvent event){
                switch (event.getCode()) {
                    case UP:
                        if (choice > 0){
                            s.getChildren().clear();
                            choice-=2;
                            s.add(im,0,choice);
                            s.add(lbl1,1,0);
                            s.add(lbli1,1,1);
                            s.add(lbl2,1,2);
                            s.add(lbli2,1,3);
                            s.add(lbl3,1,4);
                            s.add(lbli3,1,5);
                        }
                        break;
                    case DOWN:
                        if (choice < 4) {
                            s.getChildren().clear();
                            choice+=2;
                            s.add(im,0,choice);
                            s.add(lbl1,1,0);
                            s.add(lbli1,1,1);
                            s.add(lbl2,1,2);
                            s.add(lbli2,1,3);
                            s.add(lbl3,1,4);
                            s.add(lbli3,1,5);
                        };
                        break;
                    case ENTER:
                        // Cari item pertama
                        String product[] = new String[2];
                        if (choice == 0) {
                            product[0] = "Chicken Egg";
                            product[1] = "Cow Milk";
                        }
                        else if (choice == 2){
                            product[0] = "Duck Egg";
                            product[1] = "Camel Milk";
                        }
                        else {
                            product[0] = "Goat Meat";
                            product[1] = "Horse Meat";
                        }
                        int i = 0;
                        int c1, c2;
                        boolean found = false;
                        while ( i < P.getBagSize() && !found ){
                            if ( P.getProduct(i).toString() == product[0] ) found = true;
                            else i++;
                        }
                        if (found) {
                            c1 = i;
                            found = false;
                            i = 0;
                            while (i < P.getBagSize() && !found) {
                                if (P.getProduct(i).toString() == product[1]) found = true;
                                else i++;
                            }
                            if (found) {
                                c2 = i;
                                Product p1 = P.getProduct(c1);
                                Product p2 = P.getProduct(c2);
                                P.delBag(p1);
                                P.delBag(p2);
                                if (choice == 0) {
                                    P.addBag(new Pancake());
                                } else if (choice == 2) {
                                    P.addBag(new Omelette());
                                } else {
                                    P.addBag(new Sausage());
                                }
                                parent.getChildren().clear();
                                Label lbl = new Label("Mix Product berhasil");
                                lbl.setFont(Font.font("PT Mono",16));
                                parent.getChildren().add(lbl);
                                Timer timer = new java.util.Timer();
                                timer.schedule(new TimerTask() {
                                    public void run() {
                                        Platform.runLater(new Runnable() {
                                            public void run() {
                                                stage.close();
                                                timer.cancel();
                                            }
                                        });
                                    }
                                }, 1500, 1500);
                            }
                        }
                            if (!found) {
                                System.out.println("Gagal");
                                parent.getChildren().clear();
                                Label lbl = new Label("Mix Product gagal");
                                lbl.setFont(Font.font("PT Mono",16));
                                parent.getChildren().add(lbl);
                                //s.setAlignment();
                                Timer timer = new java.util.Timer();
                                timer.schedule(new TimerTask() {
                                    public void run() {
                                        Platform.runLater(new Runnable() {
                                            public void run() {
                                                    stage.close();
                                                    timer.cancel();
                                            }

                                        });
                                    }
                                }, 1500, 1500);
                            }
                        break;
                }
            }
        });
    }
}
