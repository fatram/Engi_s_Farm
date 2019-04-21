package Junit;

import farmanimal.Cow;
import org.junit.Test;

import static org.junit.Assert.*;

public class CowTest {

    @Test
    public void test() {
        System.out.println("Test Cow");
        Cow c = new Cow();
        assertEquals('S', c.render());
        assertFalse(c.isMeatProducing());
        assertFalse(c.isEggProducing());
        assertTrue(c.isMilkProducing());
        assertEquals(0, c.getPosX());
        assertEquals(0, c.getPosY());
    }
}