#include "../Game.hpp"

int main() {
    Game G(11,10,6,10); 
    G.setBoard(0,0,new Barn());
    /*
    //Inisialisasi board gameplay
    for (int i=0; i<G.getHeight(); i++){
        for (int j =0; j<G.getWidth(); j++){
            if (i>=0 && i<=2 && j>=0 && j<=2){
                //Inisialisasi coop
                G.setBoard(i,j,new Coop());
            }
            else if (i>=0 && i<=5 && j>=4&& j<=7){
                //inisialisasi Barn
                G.setBoard(i,j,new Barn());
            }
            else if (i == 1 && j == 10){
                //inisialisasi Truck
                G.setBoard(i,j,new Mixer());
            }
            else if (i == 3 && j == 10){
                //inisialisasi well
                G.setBoard(i,j,new Well());
            }
        }
    } */
    //G.printBoard();
    return 0;
}