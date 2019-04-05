#include "../Game.hpp"
#include <iostream>

using namespace std;
int main() {
    Game G;
    string cmd;
    G.addAnimal(new Camel(1,1));
    do {
		//G.printBoard();
        cout<<"Masukkan input: ";
        cin>>cmd;
        G.readCommand(cmd);
    }
    while (cmd.compare("exit")!=0);
    return 0;
}
