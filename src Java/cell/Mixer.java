package cell;

import player.Player;
import product.Product;
import product.Pancake;
import product.Omelette;
import product.Sausage;
import java.util.Scanner;

public class Mixer extends Facility {
    /**
     * Mengembalikan karakter representsi Mixer
     * @return 'M'
     */
    public char render(){
        return 'M';
    }

    /**
     * Menghasilkan SideProduct dari beberapa FarmProduct
     * @param P objek Player yang diubah
     */
    public void interact(Player P){
        int choice;
        System.out.println("Resep yang tersedia : ");
        System.out.println("1. Pancake");
        System.out.println("   Ingredients : Chicken's Egg + Cow's Milk");
        System.out.println("2. Omelette");
        System.out.println("   Ingredients : Duck's Egg + Camel's Milk");
        System.out.println("3. Sausage");
        System.out.println("   Ingredients : Goat's Meat + Horse's Meat");
        System.out.println("Pilih item yang Anda inginkan (1/2/3) : ");
        do {
            Scanner scanner = new Scanner(System.in);
            choice = scanner.nextInt();
            if(choice != 1 && choice != 2 && choice != 3){
                System.out.println("Tolong masukkan angka 1, 2, atau 3");
            }
        } while(choice != 1 && choice != 2 && choice != 3);
        if(P.getBagSize() > 0){
            System.out.println("Item di dalam bag : ");
            for(int i = 0; i < P.getBagSize(); i++){
                System.out.println((i+1) + ". " + P.getProduct(i).toString());
            }
            System.out.println("Pilih item yang akan digunakan (e.g 1 2 (Artinya item nomor 1 dan 2) : ");
            int c1;
            int c2;
            Scanner sc = new Scanner(System.in);
            c1 = sc.nextInt();
            c2 = sc.nextInt();
            if(c1 > P.getBagSize() || c2 > P.getBagSize()){
                System.out.println("Item yang dipilih tidak tersedia");
            } else {
                Product p1 = P.getProduct(c1-1);
                Product p2 = P.getProduct(c2-1);
                if(choice == 1){
                    if((p1.toString().equals("Chicken Egg")
                            && p2.toString().equals("Cow Milk")) ||
                            (p2.toString().equals("Chicken Egg")
                                    && p1.toString().equals("Cow Milk"))){
                        P.delBag(p1);
                        P.delBag(p2);
                        P.addBag(new Pancake());
                        System.out.println("Pancake berhasil dibuat");
                    } else {
                        System.out.println("Pancake gagal dibuat");
                    }
                } else if(choice == 2){
                    if((p1.toString().equals("Duck Egg")
                            && p2.toString().equals("Camel Milk")) ||
                            (p2.toString().equals("Duck Egg")
                                    && p1.toString().equals("Camel Milk"))){
                        P.delBag(p1);
                        P.delBag(p2);
                        P.addBag(new Omelette());
                        System.out.println("Omelette berhasil dibuat");
                    } else {
                        System.out.println("Omelette gagal dibuat");
                    }
                } else {
                    if((p1.toString().equals("Goat Meat")
                            && p2.toString().equals("Horse Meat")) ||
                            (p2.toString().equals("Goat Meat")
                                    && p1.toString().equals("Horse Meat"))){
                        P.delBag(p1);
                        P.delBag(p2);
                        P.addBag(new Sausage());
                        System.out.println("Sausage berhasil dibuat");
                    } else {
                        System.out.println("Sausage gagal dibuat");
                    }
                }
            }
        } else {
            System.out.println("Tas anda kosong");
        }
    }
}
