package Junit;

import org.junit.Test;
import product.HorseMeat;

import static org.junit.Assert.*;

public class HorseMeatTest {

    @Test
    public void toString1() {
        HorseMeat c = new HorseMeat();
        String str = "Horse Meat";
        assertEquals(str, c.toString());

    }
}