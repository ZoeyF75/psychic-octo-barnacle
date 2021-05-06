#include <iostream>

using namespace std;

//superclass
class Chef {
  public:
    void makeChicken() {
      cout << "The chef makes chicken" << endl;
    }
    void makeSalad() {
      cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish() {
      cout << "The chef makes bbq ribs" << endl;
    }
};

//subclass
//inherit the functionality of Chef class
class ItalianChef: public Chef{
  public:
    void makePasta() {
      cout << "The chef makes pasta" << endl;
    }
    //overrides previous function for this class
    void makeSpecialDish() {
      cout << "The chef makes chicken parm" << endl;
    }
};

int main ()
{
  Chef chef;
  chef.makeChicken();

  ItalianChef italianChef;
  italianChef.makeChicken();
  italianChef.makePasta();
  
  chef.makeSpecialDish();
  italianChef.makeSpecialDish();
  
  return 0;
}