/*Fazer uma função que recebe um número inteiro n, um número real x e retorna o somatório
  dos n primeiros termos da sequência mostrada na questão anterior. Além disso, você deve
  fazer um procedimento exercicioXX() para chamar a função desenvolvida nesta questão.*/

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

//Criação da função par.
int par(int n){

  int numero = 0;

  //For para repetição.
  for (int i = 1; i <= n; i++){
    numero = numero + 2;
  } 

  return numero;
}

//Criação da função umSobreImparFatorial.
double umSobreImparFatorial(int n){

double resultado = 1.0 / fatorial(1 + 2 * n);

  return resultado;
}

//Criação da função parSobreImparFatorial.
double parSobreImparFatorial(int n){

  double dpar= par(n);
  return (umSobreImparFatorial(n) / (1 / dpar));
}

//Criaçao da função parSobreImparFatorialComXaoQuadrado 
double parSobreImparFatorialComXaoQuadrado (int n, float x){

  double resultado = 0;

  for(int i = 1; i <= n; i++){
    resultado = (parSobreImparFatorial(n) / (1 / pow(x,i)));
  }

  return resultado;
}

//Criação da função de soma pedida.
double SomaParSobreImparFatorialComXaoQuadrado (){

  double soma = 0;
  int n, x;

  //Lendo n e x.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);
  printf("Digite um valor real e positivo para x: ");
  scanf("%d", &x);
  
  for(int i = 1; i <= n; i++){

    soma = soma + parSobreImparFatorialComXaoQuadrado (i, x);
  }

  return soma;
  }

//Criação do procedimento.
void exercicio10(){

  //Mostando o resultado na tela.
  printf("O valor da soma da sequencia e: %.2lf", SomaParSobreImparFatorialComXaoQuadrado());
}

//int main usando o procedimento criado anteriormente.
int main(void) {

  exercicio10();

  return 0;
}

