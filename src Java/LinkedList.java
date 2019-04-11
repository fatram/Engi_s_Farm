import java.util.ArrayList;

public class LinkedList<E> extends ArrayList<E> {
    /**
     * Mencari element di dalam LinkedList
     * @param element element yang dicari
     * @return index pertama kali ditemukannya dari element jika element ada di LinkedList, -1 jika element tidak ada di dalam LinkedList
     */
    public int find(E element){
        return indexOf(element);
    }
}
