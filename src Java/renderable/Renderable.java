package renderable;

import javafx.scene.layout.StackPane;

public interface Renderable {
    /**
     * Mengembalikan karakter representatif suatu objek
     * @return karakter representatif
     */
    public char render();
    public StackPane renderImg();
}
