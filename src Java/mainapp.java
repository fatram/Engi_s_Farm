import farmanimal.*;
import gameplay.Gameplay;
import javafx.animation.AnimationTimer;
import javafx.application.Application;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.input.KeyEvent;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.FontWeight;
import javafx.scene.text.Text;
import javafx.stage.Stage;

public class MainApp extends Application {

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

        VBox vbox = new VBox();
        vbox.setPadding(new Insets(10));
        vbox.setSpacing(8);
        Text title = new Text("Bag Items:     ");
        title.setFont(Font.font("PT Mono",FontWeight.BOLD, 14));
        title.setFill(Color.WHITE);
        vbox.getChildren().add(title);
        Label lblitems = new Label("Empty\n");
        lblitems.setTextFill(Color.WHITE);
        lblitems.setFont(Font.font("PT Mono"));
        vbox.setStyle("-fx-background-color: #336699;");
        vbox.getChildren().add(lblitems);

        Label label1 = new Label("Tick: ");
        label1.setTextFill(Color.WHITE);
        label1.setFont(Font.font("PT Mono"));
        Label lbltick = new Label(String.valueOf(G.getTick()));
        lbltick.setTextFill(Color.WHITE);
        lbltick.setFont(Font.font("PT Mono"));
        Label label2 = new Label ("Water: ");
        label2.setTextFill(Color.WHITE);
        label2.setFont(Font.font("PT Mono"));
        Label lblwater = new Label(String.valueOf(G.getPlayer().getWater()));
        lblwater.setTextFill(Color.WHITE);
        lblwater.setFont(Font.font("PT Mono"));
        Label label3 = new Label("Money: ");
        label3.setTextFill(Color.WHITE);
        label3.setFont(Font.font("PT Mono"));
        Label lblmoney = new Label(String.valueOf(G.getPlayer().getMoney()));
        lblmoney.setTextFill(Color.WHITE);
        lblmoney.setFont(Font.font("PT Mono"));

        hbox.getChildren().addAll(label1,lbltick,label2,lblwater,label3, lblmoney);
        border.setTop(hbox);
        GridPane board = G.showBoard();
        Pane boardPane = new Pane(board);
        border.setCenter(boardPane);
        border.setRight(vbox);

        Scene scene = new Scene(border);
        scene.setOnKeyPressed(new EventHandler<KeyEvent>() {
            @Override
            public void handle(KeyEvent event) {
                String cmd = "";
                switch (event.getCode()) {
                    case UP:  cmd = "w"; break;
                    case DOWN:  cmd  = "s"; break;
                    case LEFT:  cmd = "a"; break;
                    case RIGHT: cmd  = "d"; break;
                    case Z: cmd = "talk"; break;
                    case SPACE: cmd = "interact"; break;
                    case X: cmd = "kill"; break;
                    case C: cmd = "grow"; break;
                }
                if (cmd != "") {
                    G.readCommand(cmd,boardPane,primaryStage);
                }
            }
        });

        AnimationTimer timer = new AnimationTimer() {
            @Override
            public void handle(long now) {
                lbltick.setText(String.valueOf(G.getTick()));
                lblwater.setText(String.valueOf(G.getPlayer().getWater()));
                lblmoney.setText(String.valueOf(G.getPlayer().getMoney()));
                board.getChildren().clear();
                board.getChildren().add(G.showBoard());
                lblitems.setText("");
                if (G.getPlayer().getBagSize() > 0) {
                    for (int i = 0; i < G.getPlayer().getBagSize(); i++) {
                        lblitems.setText(lblitems.getText() + (i + 1) + ". " + G.getPlayer().getProduct(i).toString() + '\n');
                    }
                } else {
                    lblitems.setText("Empty");
                }
            }
        };

        primaryStage.setScene(scene);
        primaryStage.show();
        timer.start();
    }
}
