/* Fazer um método recursivo que recebe um número inteiro n e retorna o n-ésimo termo
  da equação de recorrência abaixo:
  T (1) = 2
  T (2) = 3
  T (n) = 5 · n + T (n − 1)n*/

#include <stdio.h>
#include <math.h>

//Criação da equação T.
int T (int n){

  int resultado;

  //Parada 1.
  if(n == 1){
    return 2;
  //Para 2.
  } else if(n == 2){
    return 3;
  //Usando a função T dentro dela mesma.
  } else {
    resultado = (5 * n) + pow(T (n-1), n);
  }

  return resultado;
}

//Testando no int main.
int main(void) {
  
  int n;

  //Lendo valor de n.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Mostrando na tela o resultado da função.
  printf("O %d-ésimo termo da equação e: %d", n, T(n));
  
  return 0;
}