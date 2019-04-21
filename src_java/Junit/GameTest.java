package Junit;

import cell.Coop;
import farmanimal.Goat;
import farmanimal.Horse;
import game.Game;
import org.junit.Test;

import static org.junit.Assert.*;

public class GameTest {

    @Test
    public void test() {
        Game g = new Game();
        Goat k = new Goat();
        g.addAnimal(new Horse());
        g.addAnimal(k);
        assertEquals(2,g.getAnimalSize());
        assertEquals(10,g.getHeight());
        assertEquals(11,g.getWidth());
        assertEquals(0,g.getTick());
        g.updateTick();
        g.updateAnimal();
        g.delAnimal(k);
        g.updateAnimal();
        g.printBoard();
    }
}