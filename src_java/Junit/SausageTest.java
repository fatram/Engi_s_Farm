package Junit;

import org.junit.Test;
import product.Sausage;

import static org.junit.Assert.*;

public class SausageTest {

    @Test
    public void toString1() {
        Sausage c= new Sausage();
        String str = "Sausage";
        assertEquals(str, c.toString());
    }
}