package Junit;

import org.junit.Test;
import product.CowMilk;

import static org.junit.Assert.*;

public class CowMilkTest {

    @Test
    public void toString1() {
        CowMilk c = new CowMilk();
        String str = "Cow Milk";
        assertEquals(str,c.toString());

    }
}