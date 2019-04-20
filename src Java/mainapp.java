import farmanimal.*;
import gameplay.Gameplay;
import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.HBox;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

public class mainapp extends Application {

    public static void main(String[] args) {
        launch(args);
    }



    @Override
    public void start(Stage primaryStage) {
        primaryStage.setTitle("Engi's Farm");

        BorderPane border = new BorderPane();

        Gameplay G = new Gameplay();
        G.addAnimal(new Chicken(1,1));
        G.addAnimal(new Duck(0,2));
        G.addAnimal(new Horse(3,5));
        G.addAnimal(new Goat(5,6));
        G.addAnimal(new Cow(2,3));
        G.addAnimal(new Camel(9,7));

        HBox hbox = new HBox();
        hbox.setPadding(new Insets(15, 12, 15, 12));
        hbox.setSpacing(10);
        hbox.setStyle("-fx-background-color: #336699;");

        Label label1 = new Label("Tick: ");
        label1.setTextFill(Color.WHITE);
        Label lbltick = new Label(String.valueOf(G.getTick()));
        lbltick.setTextFill(Color.WHITE);
        Label label2 = new Label ("Water: ");
        label2.setTextFill(Color.WHITE);
        Label lblwater = new Label(String.valueOf(G.getPlayer().getWater()));
        lblwater.setTextFill(Color.WHITE);
        Label label3 = new Label("Money: ");
        label3.setTextFill(Color.WHITE);
        Label lblmoney = new Label(String.valueOf(G.getPlayer().getMoney()));
        lblmoney.setTextFill(Color.WHITE);

        GridPane board = G.showBoard();
        hbox.getChildren().addAll(label1,lbltick,label2,lblwater,label3,lblmoney);
        border.setTop(hbox);
        border.setCenter(board);

        Scene scene = new Scene(border);
        primaryStage.setScene(scene);
        primaryStage.show();
    }
}
