#include <iostream>

using namespace std;

class Relogio{

  int horas;
  int minutos;
  int segundos;

public:

  Relogio () : horas(0), minutos(0), segundos(0){}

  void setHora(int h, int min, int seg){
    if(min >= 60 || seg >= 60)
      cout << "Erro\n";
    else
      horas = h;
      minutos = min;
      segundos = seg;
  }

  void getHora(int &h, int &m, int &s){
    h = horas;
    m = minutos;
    s = segundos;
  }

  void avancar1seg(){
    segundos++;
    if(segundos >= 60){
      segundos = 0;
      minutos++;
        if(minutos >= 60){
          minutos = 0;
          horas++;
        }
  }
  }
};

int main() {
 
}