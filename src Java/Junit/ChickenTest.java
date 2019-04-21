package Junit;

import farmanimal.Chicken;
import org.junit.Test;

import static org.junit.Assert.*;

public class ChickenTest {

    @Test
    public void test() {
        System.out.println("Test Chicken");
        Chicken c = new Chicken();
        assertEquals('A', c.render());
        assertFalse(c.isMeatProducing());
        assertFalse(c.isMilkProducing());
        assertTrue(c.isEggProducing());
        assertEquals(0, c.getPosX());
        assertEquals(0, c.getPosY());
    }
}