package Junit;

import org.junit.Test;
import product.DuckEgg;

import static org.junit.Assert.*;

public class DuckEggTest {

    @Test
    public void toString1() {
        DuckEgg c = new DuckEgg();
        String str ="Duck Egg";
        assertEquals(str,c.toString());
    }
}