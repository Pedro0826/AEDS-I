/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço*/

#include <stdio.h>

int main(void) {

  int a, b;
  
  //Lendo a e b.
  printf("Digite um numero inteiro: ");
  scanf("%d", &a);
  printf("Digite outro numero inteiro: ");
  scanf("%d", &b);

  //If para ver qual é o maior endereço.
  if(&a > &b)
    printf("%d e o maior endereço e %d e o menor.", a, b);
  else
    printf("%d e o maior endereço e %d e o menor.", b, a);
 
  return 0;
}