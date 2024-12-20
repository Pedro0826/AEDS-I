#include <iostream>

using namespace std;

class ArC {

  float tempExt, tempAr;
  int pot;

public:

  ArC(float a, int b) : tempExt (a), pot(b){
    tempAr = (tempExt - (pot * 1.8));
  } 

  float getTemp(){
    return tempAr;
  }

};

int main() {

  ArC ac1(25, 10), ac2(31, 5);

  cout << "A temperatura do ar esta em: " << ac1.getTemp() << "\n" << "E do segundo e: " << ac2.getTemp();
}