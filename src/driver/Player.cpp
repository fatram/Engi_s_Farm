#include "../Player.hpp"
#include "../CamelMilk.hpp"
#include "../HorseMeat.hpp"
#include "../Pancake.hpp"
#include "../DuckEgg.hpp"

int main(){
    Player P;
    P.addBag(new CamelMilk());
    P.addBag(new HorseMeat());
    P.addBag(new Pancake());
    P.addBag(new DuckEgg());


    for (int i=0; i<P.getBagSize(); i++){
        cout<<P.getProduct(i)->toString()<<endl;
    } 
}