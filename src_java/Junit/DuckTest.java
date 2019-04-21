package Junit;

import farmanimal.Duck;
import org.junit.Test;

import static org.junit.Assert.*;

public class DuckTest {

    @Test
    public void test() {
        System.out.println("Test Duck");
        Duck c = new Duck();
        assertEquals('B', c.render());
        assertFalse(c.isMeatProducing());
        assertFalse(c.isMilkProducing());
        assertTrue(c.isEggProducing());
        assertEquals(0, c.getPosX());
        assertEquals(0, c.getPosY());
    }
}