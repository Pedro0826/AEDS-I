/*Uma função double parSobreImpar(int n) que recebe um número inteiro n e retorna
  o n-ésimo termo da sequência 2/3 , 4/5 , 6/7 , 8/9 , 10/11 , . . .. A sua função deve utilizar as funções par e umSobreImpar desenvolvidas anteriormente.*/
#include <stdio.h>

//Criação da função par.
int par(int n){

  int numero = 0;

  //For para repetição.
  for (int i = 1; i <= n; i++){
    numero = numero + 2;
  } 

  return numero;
}

//Criação da função umSobreImpar.
double umSobreImpar(int n){

double resultado = 1.0 / (1 + 2 * n);

  return resultado;
}

//Criação da função parSobreImpar.
double parSobreImpar(int n){

  double dpar = par(n);
  
  return (umSobreImpar(n) / (1 / dpar));
}

//Usando as funções criadas no int main.
int main(void) {

  int n;
  
  //Lendo n para ser usado na função
  printf("Digite um numero inteiro e superior para n: ");
  scanf("%d", &n);

  //Mostrando e usando a função parSobreImpar.
  printf("O %d-esimo termo da sequencia e: %.2lf", n, parSobreImpar(n));
  return 0;
}
