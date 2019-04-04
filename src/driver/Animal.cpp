#include "../FarmAnimal.hpp" 
#include "../FarmProduct.hpp" 
#include "../Renderable.hpp"
#include "../Camel.hpp"
#include "../Cow.hpp"
#include "../Duck.hpp" 
#include "../Chicken.hpp"
#include "../Horse.hpp"
#include "../Goat.hpp"
#include "../CamelMilk.hpp"
#include "../CowMilk.hpp"
#include "../DuckEgg.hpp" 
#include "../ChickenEgg.hpp"
#include "../HorseMeat.hpp"
#include "../GoatMeat.hpp"


#include <iostream>

using namespace std;
int main() {
    FarmAnimal* fp;
    FarmProduct* f;

    Camel c;
    fp = &c;
    fp->Bersuara(); 
    f = c.interact();
    cout << f->toString() << endl;

    Cow co;
    fp = &co;
    fp->Bersuara();
    f = co.interact();
    cout << f->toString() << endl;
    
    Duck d;
    fp = &d;
    fp->Bersuara();
    f = d.interact();
    cout << f->toString() << endl;

    Chicken ch;
    fp = &ch;
    fp->Bersuara();
    f = ch.interact();
    cout << f->toString() << endl;

    Horse h;
    fp = &h;
    fp->Bersuara();
    f = h.interact();
    cout << f->toString() << endl;

    Goat g;
    fp = &g;
    fp->Bersuara(); 
    f = g.interact();
    cout << f->toString() << endl; 
    return 0; 
}