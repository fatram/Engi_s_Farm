package Junit;

import org.junit.Test;

import static org.junit.Assert.*;
import product.*;
public class CamelMilkTest {

    @Test
    public void toString1() {
        CamelMilk cm = new CamelMilk();
        String str = "Camel Milk";
        assertEquals(str,cm.toString());
    }
}