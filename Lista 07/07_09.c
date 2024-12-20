/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
  apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor
  lido.*/

#include <stdio.h>
#include <stdlib.h>


int main(void) {

  int array [5];
  int *arrayPtr;

  //Ponteiro é igual ao inicio da array.
  arrayPtr = array;

  printf("Digite 5 valores inteiros:\n");
  
  //For para fazer a leitura de cada vetor.
  for(int i = 0; i < 5; i++){
    scanf("%d", (arrayPtr + i));
  }

  printf("O dobro de cada array é: ");

  //For para mostrar na tela o resultado.
  for(int i = 0; i < 5; i++){
    printf("%d, ", *(arrayPtr + i) * 2);
  }
  
  return 0;
}