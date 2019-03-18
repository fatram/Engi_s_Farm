#include <iostream>
#include "LinkedList.hpp"

using namespace std;

int main(){
    LinkedList<int> t;// = new LinkedList<int>();
    t.add(5);
    t.add(7);
    t.add(8);
    t.add(109);
    cout << t.isEmpty()<<endl;

    return 0;
}