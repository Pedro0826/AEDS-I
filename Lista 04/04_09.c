/*Fazer uma função que recebe um número inteiro n, um número real x e retorna o n-ésimo
termo da sequência abaixo. Utilize as funções desenvolvidas anteriormente. Além disso,
você deve fazer um procedimento exercicio09() para ler o valor de n e chamar a função
desenvolvida nesta questão. 2x/3! , 4x2/5! , 6x3/7! , 8x4/9! , 10x5/11! , . . .*/

//Por ter adicionado o fatorial no denominador, tive que mudar as funções já criadas

#include <stdio.h>
#include <math.h>

//Criação da função Fatorial.
int fatorial(int n){

  int fat = 1;

  //For para repetição e fazer o fatorial.
  for(int i = 1; i <= n; i++){
    fat = fat * i;
  }

  return fat; 
}

int par(int n){

  int numero = 0;

  //For para repetição.
  for (int i = 1; i <= n; i++){
    numero = numero + 2;
  } 

  return numero;
}

//Criação da função umSobreImpar e adicionando fatorial.
double umSobreImparFatorial(int n){

double resultado = 1.0 / fatorial(1 + 2 * n);

  return resultado;
}

//Criação da função parSobreImparFatorial.
double parSobreImparFatorial(int n){

  double dpar = par(n);

  return (umSobreImparFatorial(n) / (1 / dpar));
}

//Criaçao da função parSobreImparFatorialComXaoQuadrado 
double parSobreImparFatorialComXaoQuadrado (int n, float x){

  double resultado;

  for(int i = 1; i <= n; i++){
    resultado = (parSobreImparFatorial(n) / (1 / pow(x,i)));
  }

  return resultado;
}


//Criação do procedimento.
void exercicio09(){

  int n;
  float x;

  //Lendo n e x.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);
  printf("Digite um valor real e positivo para x: ");
  scanf("%f", &x);

  //Mostando o resultado na tela.
  printf("O valor do %d-esimo da sequencia e: %.2lf", n, parSobreImparFatorialComXaoQuadrado(n, x));
}

//int main usando o procedimento criado anteriormente.
int main(void) {

  exercicio09();

  return 0;
}