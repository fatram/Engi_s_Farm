#include "../Game.hpp"
#include <iostream>

using namespace std;
int main() {
    Game G;
    string cmd;
    G.printBoard();
    do {
        cout<<"Masukkan input: ";
        cin>>cmd;
        G.readCommand(cmd);
    }
    while (cmd.compare("exit")!=0);
    return 0;
}