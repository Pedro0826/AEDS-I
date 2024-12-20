//Fazer um método recursivo que recebe um número inteiro e retorna o seu fatorial.

#include <stdio.h>

//Criação da função.
int fatorial (int n){

  int fat;

  //Condição de parada.
  if(n == 1){
    return 1;
  //Usando a função dentro da função.
  } else {
    fat = n * fatorial (n-1);
  }
  
  return fat;
}

//Usando no int main
int main(void) {

  int n;

  //Lendo valor de n.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Mostrando na tela o resultado da função.
  printf("O fatorial de %d e: %d", n, fatorial (n));
  
  return 0;
}