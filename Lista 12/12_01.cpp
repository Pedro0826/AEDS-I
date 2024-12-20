#include <iostream>
#include <string> 

using namespace std;

class Pessoa {

  string nome;
  int idade;
  float altura;

public:

  Pessoa() : nome(""), idade(0), altura(0.0){}

  void setnome(string &nomes){nome = nomes;}
  void setidade(int idades){idade = idades;}
  void setaltura(float alturas){altura = alturas;}

  string getnome(){return nome;}
  int getidade(){return idade;}
  float getaltura(){return altura;}
};

int main() {

  Pessoa p;

  string nome = "Pedro";
  
  p.setnome(nome);
  p.setidade(18);
  p.setaltura(1.80);

  cout << p.getnome() << "\n";
  cout << p.getidade() << "\n";
  cout << p.getaltura() << "\n";
}