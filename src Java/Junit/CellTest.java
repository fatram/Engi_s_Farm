package Junit;

import cell.Cell;
import cell.Coop;
import cell.Well;
import org.junit.Test;

import static org.junit.Assert.*;

public class CellTest {

    @Test
    public void test() {
        Cell c1 = new Coop();
        Cell c2 = new Well();
        c1.grow();
        c2.grow();
        assertTrue(c1.getHasGrass());
        assertTrue(c2.getHasGrass());
        assertFalse(c1.getHasFacility());
        assertTrue(c2.getHasFacility());
        c1.setCoolDownTruck(10);
        assertEquals(10,c1.getCoolDownTruck());



    }
}