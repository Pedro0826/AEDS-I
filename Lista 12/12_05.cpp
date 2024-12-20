#include <iostream>

using namespace std;

class Televisao{

  int canal, volume;

  public:

  Televisao() : canal(0), volume(0){}

  void aumentarvolume(){volume++;}
  void diminuirvolume(){volume--;}
  void passarcanal(){canal++;}
  void voltarcanal(){
    if(canal > 0)
      canal--;
  }

  int getCanal(){
    return canal;
  }

  int getvolume(){
    return volume;
  }
};

int main() {

  Televisao tv1;

  tv1.passarcanal();
  tv1.passarcanal();
  tv1.passarcanal();
  tv1.passarcanal();
  tv1.passarcanal();
  tv1.passarcanal();

  tv1.aumentarvolume();
  tv1.aumentarvolume();
  tv1.aumentarvolume();
  tv1.aumentarvolume();
  tv1.aumentarvolume();
  tv1.aumentarvolume();

  tv1.diminuirvolume();
  tv1.diminuirvolume();

  cout << "O canal que esta e: " << tv1.getCanal() << "\n" << "E o volume esta no " << tv1.getvolume();
}