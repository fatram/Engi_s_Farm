package Junit;

import org.junit.Test;
import player.Player;
import product.CamelMilk;
import product.CowMilk;

import static org.junit.Assert.*;

public class PlayerTest {

    @Test
    public void test() {
        Player P = new Player();
        P.setWater(5);
        P.setPosX(5);
        P.setPosY(5);
        P.setMoney(5);
        assertEquals(5,P.getPosX());
        assertEquals(5, P.getPosY());
        assertEquals(5, P.getWater());
        assertEquals(5, P.getMoney());
        assertTrue(P.isBagEmpty());
        P.addBag(new CamelMilk());
        P.addBag(new CowMilk());
        assertEquals("Cow Milk", P.getProduct(1));
        assertEquals("Camel Milk", P.getProduct(0));
    }

}