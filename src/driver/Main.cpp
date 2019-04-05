#include "../Game.hpp"

int main() {
    Game G(3,2,0,0);
    Cell *c;
    cout<<G.getHeight()<<endl;
    cout<<G.getWidth()<<endl; 
    //c = G.getBoard(0,0);
    //G.board[0][0] =new Barn();
    //Barn B;
    G.setBoard(0,0,new Barn());
    //G.setBoard(0,1,new Coop());
    //G.setBoard(0,2,new Grassland());
    //G.setBoard(1,0,new Truck());
    //G.setBoard(1,1,new Well());
    //G.setBoard(1,2,new Mixer());
    //G.setBoard(0,0,&B);
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