package Junit;

import org.junit.Test;
import product.Product;
import product.Sausage;

import static org.junit.Assert.*;

public class ProductTest {

    @Test
    public void test() {
        Sausage s = new Sausage();
        s.setHarga(1000);
        assertEquals(1000, s.getHarga());

    }
}

