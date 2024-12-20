/*Faça um programa para preencher uma matriz 4 x 4, em seguida apresentar na tela a soma
  dos elementos abaixo da diagonal principal. Mostre na tela os elementos da diagonal
  principal também.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main (){

   int matriz [4] [4], soma = 0;

  srand(time(NULL));

   //Preechendo a matriz.
  for (int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
     matriz [i][j] = rand() % 101;
    }
  }

   printf("A diagonal principal da matriz e: ");
    //Pegando os numeros da diagonal
   for (int i = 0; i < 4; i++){
      soma = soma + matriz [i][i]; //Somando eles.
      printf("%d, ", matriz [i] [i]);
     }

   //Mostrando a soma.
     printf("\nA soma dos numeros da diagonal principal e: %d", soma);

    return 0;
}