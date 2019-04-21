package Junit;

import org.junit.Test;
import product.GoatMeat;

import static org.junit.Assert.*;

public class GoatMeatTest {

    @Test
    public void toString1() {
        GoatMeat c = new GoatMeat();
        String str = "Goat Meat";
        assertEquals(str, c.toString());
    }
}