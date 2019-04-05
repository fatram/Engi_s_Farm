#include "../Truck.hpp"
#include "../Well.hpp"
#include "../Mixer.hpp"
#include "../Barn.hpp"
#include "../Grassland.hpp"
#include "../Coop.hpp"
#include <iostream>

using namespace std;
int main(){
    /*
    Cell **c;
    c = new Cell*[6];
    c[0] = new Barn();
    c[1] = new Coop();
    c[2] = new Grassland();
    c[3] = new Truck();
    c[4] = new Mixer();
    c[5] = new Well();
    for (int i=0;i<5;i++){
        cout<<" "<<c[i]->render();
    }
    */

    Cell ***c;
    c = new Cell**[2];
    for (int i=0;i<2;i++){
        c[i] = new Cell*[3];
    }
    c[0][0] = new Barn();
    c[0][1] = new Coop();
    c[0][2] = new Grassland();
    c[1][0] = new Truck();
    c[1][1] = new Mixer();
    c[1][2] = new Well();
    
    for (int i=0;i<2;i++){
        for (int j=0; j<3; j++){
            cout<<" "<<c[i][j]->render();
        }        
        cout<<endl;
    }
     

    return 0;
}