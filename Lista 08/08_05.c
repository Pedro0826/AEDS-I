/*Faça um procedimento que preencha 2 matrizes, A 4 x 6 e B 4 x 6. Faça uma função para
  cada uma das situações a seguir, que recebe duas matrizes preenchidas, calcula e retorna as
  matrizes indicadas:
  a) uma matriz S que seja a soma de A e B.
  b) uma matriz D que seja a diferença de A e B. (A - B).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Procedimento para completar matriz.
void preencheer_matriz(int *matriz, int linha, int coluna){

  for(int i = 0; i < linha; i++){
    for(int j = 0; j < coluna; j++){
      *(matriz + i * coluna + j) = rand()%101;
      printf("%d, ", *(matriz + i * coluna + j));
    }
  }

}

//Criando procedimento para soma de matrizes
void funcaoA (int matriz1[4] [6], int matriz2[4] [6], int matriz3[4][6]){

  printf("A soma das matrizes dara: ");
  
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 6; j++){
      matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
      printf("%d, ",matriz3[i][j]);
    }
  }
} 

//Criando procedimento para subtrair matrizes.
void funcaoB (int matriz1[4] [6], int matriz2[4] [6], int matriz3[4][6]){

  printf("\nA diferenca das matrizes dara: ");

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 6; j++){
      matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
      printf("%d, ",matriz3[i][j]);//Mostrando na tela os resultados.
    }
  }
} 
  
int main(void) {

  srand(time(NULL));

  //Declaração de variaveis.
  int matrizA[4][6], matrizB[4][6], matrizS[4][6], matrizD[4][6];

  preencheer_matriz(matrizA, 4, 6);
  preencheer_matriz(matrizB, 4, 6);
  
  funcaoA(matrizA, matrizB, matrizS);
  funcaoB(matrizA, matrizB, matrizD);

  
  return 0;
}