/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
  do teclado e imprima o endereço das posições contendo valores pares.*/

#include <stdio.h>

int main(void) {
  
  int array [5];

  printf("Digite 5 valores inteiros:\n");

  //For para fazer a leitura de cada vetor.
  for(int i = 0; i < 5; i++){
    scanf("%d", &array[i]);
  }

  //For para mostrar na tela cada endereço.
  for(int i = 0; i < 5; i++){
    if(array[i] % 2 == 0)
      printf("%p\n", &array[i]);
  }   
}