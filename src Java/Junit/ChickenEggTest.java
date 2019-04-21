package Junit;

import org.junit.Test;
import product.ChickenEgg;

import static org.junit.Assert.*;

public class ChickenEggTest {

    @Test
    public void toString1() {
        ChickenEgg c = new ChickenEgg();
        String str = "Chicken Egg";
        assertEquals(str, c.toString());
    }
}