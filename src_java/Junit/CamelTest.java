package Junit;

import farmanimal.Camel;
import org.junit.Test;

import static org.junit.Assert.*;

public class CamelTest {

    @Test
    public void test() {
        System.out.println("Test Camel");
        Camel c = new Camel();
        assertEquals('U', c.render());
        assertFalse(c.isMeatProducing());
        assertFalse(c.isEggProducing());
        assertTrue(c.isMilkProducing());
        assertEquals(0, c.getPosX());
        assertEquals(0, c.getPosY());

    }

}