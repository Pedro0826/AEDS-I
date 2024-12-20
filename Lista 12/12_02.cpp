#include <iostream>

using namespace std;

class Elevador{

  int andarAtual = 0;
  int totalAndar;
  int capacidade;
  int quantidade;

  public:

  void inicializa(int a, int b){
    capacidade = a;
    totalAndar = b;
  }

  void entra(){
    quantidade++;
  }

  void sai(){
    quantidade--;
  }

  void sobe(){
    if(andarAtual >= totalAndar)
      andarAtual++;
    else
      cout << "Erro\n";
  }

  void desce(){
    if(andarAtual >= 0)
      andarAtual--;
    else
      cout << "Erro\n";
  }

  int getAndarAtual(){
    return andarAtual;
  }

  int getTotalAndar(){
    return totalAndar;
  }

  int getCapacidade(){
    return capacidade;
  }

  int getQuantidade(){
    return quantidade;
  }
};

int main() {

}