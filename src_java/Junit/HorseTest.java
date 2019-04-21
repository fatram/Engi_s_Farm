package Junit;

import farmanimal.Horse;
import org.junit.Test;

import static org.junit.Assert.*;

public class HorseTest {

    @Test
    public void test() {
        System.out.println("Test Horse");
        Horse c = new Horse();
        assertEquals('H', c.render());
        assertFalse(c.isEggProducing());
        assertFalse(c.isMilkProducing());
        assertTrue(c.isMeatProducing());
        assertEquals(0, c.getPosX());
        assertEquals(0, c.getPosY());
    }
}