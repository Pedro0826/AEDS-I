#include <iostream>
#include <cmath>

using namespace std;

class circulo{

  float raio, pontox, pontoy, area, circunferencia;

  float areacirculo(){
    area = 3.14 * raio * raio;
    return area;
  }

  float circunferenciacirculo(){
    circunferencia = 2 * 3.14 * raio;
    return circunferencia;
  }

  float distanciaEntreCir(circulo &outroc){
    float difx = pontox - outroc.pontox;
    float dify = pontoy - outroc.pontoy;
    return sqrt(difx * difx + dify * dify);
  }

  public:

  circulo() : raio(0.0), pontox(0.0), pontoy(0.0), area(0.0), circunferencia(0.0){}

  void definirraio(float a){ raio = a;}
  void aumentarraio(float a){ raio = raio * (1 + (a / 100));}
  void definircentro(float a, float b){ pontox = a; pontoy = b;}

  void imprimirraio(){cout << "O raio sera: " << raio; }
  void imprimircentrocirculo(){cout << "O centro do circulo esta nas cordenadas: x =" << pontox << " y = " << pontoy;}
  void imprimirAreaCirculo(){cout << "A area do ciruclo e: " << areacirculo(); }

};

int main() {

  circulo c1;

  c1.definirraio(2);
  c1.definircentro(5,5);

  c1.imprimirraio();
  c1.imprimirAreaCirculo();
  
  
}