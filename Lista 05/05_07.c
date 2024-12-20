/*Fazer um método recursivo que conte os dígitos de um determinado número inteiro.*/

#include <stdio.h>

//Criação da função.

int contagem(int a){

  int digitos = 0;

  //Convertendo para positivo de o usuario digitar
  if(a < 0)
  a = a * -1;

  //Ordem de parada.
  if(a < 10){
    digitos = 1;
  //Usando a recursividade.
  } else {
   digitos = 1 + contagem (a / 10);
  }
  return digitos;
}

int main(void) {

  int n;
  
  //Lendo valor de n.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Mostrando na tela o resultado da função.
  printf("O numero %d, tem %d digitos.", n, contagem (n));
  return 0;
}