package Junit;

import farmanimal.Goat;
import org.junit.Test;

import static org.junit.Assert.*;

public class GoatTest {

    @Test
    public void bersuara() {
        System.out.println("Test Goat");
        Goat c = new Goat();
        assertEquals('K', c.render());
        assertFalse(c.isEggProducing());
        assertFalse(c.isMilkProducing());
        assertTrue(c.isMeatProducing());
        assertEquals(0, c.getPosX());
        assertEquals(0, c.getPosY());
    }
}