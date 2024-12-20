#include <iostream>

using namespace std;

class Carro{

  int qlitros, km, combRest;

  public:

  Carro(int l, int km) : qlitros(l), km(km){
    combRest = qlitros -  (km / 15);
  }

  int getKm(){
    return km;
  }
  int getInf(){
    return combRest;
  }
};
int main() {

  Carro car1(20, 200), car2(30, 400);

  cout << "O primeiro carro andou: " << car1.getKm() << "km e sobrou " << car1.getInf() << " litros de gasolina\n";
  cout << "O segundo carro andou: " << car2.getKm() << "km e sobrou " << car2.getInf() << " litros de gasolina";
}