/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

  int tam = 10;
  
  //srand para o rand ter numeros aleatorios.
  srand(time(NULL));

  float vetor[tam];

  //Usar o rand para atribuir aos vetores.
  for(int i = 0; i < tam; i++){
    vetor[i] = rand();
  }

  //Mostrar na tela os endereços.
  for(int i = 0; i < tam; i++){
    printf("%d = %p, ", i,(void*)&vetor[i]);
  }
  return 0;
}