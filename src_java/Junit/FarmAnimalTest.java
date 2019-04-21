package Junit;

import farmanimal.Camel;
import org.junit.Test;

import static org.junit.Assert.*;

public class FarmAnimalTest {

    @Test
    public void test() {
        System.out.println("Test salah satu farm animal : Camel");
        Camel c = new Camel();
        c.bersuara();
        c.makan();
        c.updateHungry();
        c.setEggProducing(false);
        assertEquals('U', c.render());
        assertFalse(c.isMeatProducing());
        assertFalse(c.isEggProducing());
        assertTrue(c.isMilkProducing());
        assertEquals(0, c.getPosX());
        assertEquals(0, c.getPosY());
    }
}