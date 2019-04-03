#include "LinkedList.hpp"

int main(){
    LinkedList<int*> tes;
    int* aw;
    *aw = 5; 
    tes.add(aw);
    int* t =  tes.get(0);
    return 0;
}