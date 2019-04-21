package Junit;

import org.junit.Test;
import product.Omelette;

import static org.junit.Assert.*;

public class OmeletteTest {

    @Test
    public void toString1() {
        Omelette c = new Omelette();
        String str = "Omelette";
        assertEquals(str, c.toString());
    }
}