#include "../Game.hpp"
#include <iostream>

using namespace std;
int main() {
    Game G;
    string cmd;
    G.addAnimal(new Chicken(1,1));
    G.addAnimal(new Duck(0,2));
    G.addAnimal(new Horse(3,5));
    G.addAnimal(new Goat(5,6));
    G.addAnimal(new Cow(2,3));
    G.addAnimal(new Camel(9,7));
    system("clear");
    G.printBoard();
    do {
        cout<<"Masukkan input: ";
        cin>>cmd;
        G.readCommand(cmd);
    }
    while (cmd.compare("exit")!=0);
    return 0;
}
