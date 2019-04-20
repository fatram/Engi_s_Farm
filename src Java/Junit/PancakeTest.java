package Junit;

import org.junit.Test;
import product.Pancake;

import static org.junit.Assert.*;

public class PancakeTest {

    @Test
    public void toString1() {
        Pancake c = new Pancake();
        String str = "Pancake";
        assertEquals(str, c.toString());
    }
}