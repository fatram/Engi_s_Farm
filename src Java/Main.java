import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Game G = new Game();
        String command;
        G.addAnimal(new Chicken(1,1));
        G.addAnimal(new Duck(0,2));
        G.addAnimal(new Horse(3,5));
        G.addAnimal(new Goat(5,6));
        G.addAnimal(new Cow(2,3));
        G.addAnimal(new Camel(9,7));
        Game.clearScreen();
        G.printBoard();
        do {
            Scanner scr = new Scanner(System.in);
            System.out.println("Masukkan input: ");
            command = scr.nextLine();
            G.readCommand(command);
        }
        while (!command.equals("exit"));
    }
}
