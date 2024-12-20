/*Escrever um procedimento que preenche uma matriz M(10,10) e a escreve. Faça outros
procedimentos que recebam uma matriz preenchida, realize as trocas indicadas a seguir
(um procedimento para cada uma delas) e exiba a matriz resultante da troca:
a) a linha 2 com a linha 8
b) a coluna 4 com a coluna 10
c) a diagonal principal com a diagonal secundária
d) a linha 5 com a coluna 10.
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar
o seu uso.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função para preencher uma matriz,
void preencher_matriz(int matriz[10][10]){

  srand(time(NULL));

  for (int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      matriz[i][j]= rand() % 101;
      printf("%d, ", matriz[i][j]);
    }
    printf("\n");
  }
}

void questaoA(int matriz[10][10]){

  int aux[0][0];

  //Logica para fazer a troca de posições.
  for(int i = 0; i < 10; i++){
    aux[0][0] = matriz[1][i];
    matriz[1][i] = matriz[7][i];
    matriz[7][i] = aux [0][0];
  }
  
  printf("\nLinha 2 com a linha 8 trocadas: \n");

  //Mostrar na tela a matriz com os termos pedidos trocados.
  for (int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      printf("%d, ", matriz[i][j]);
    }
    printf("\n");
  }
}

void questaoB(int matriz[10][10]){

  int aux[0][0];

  //Logica para fazer a troca de posições.
  for(int i = 0; i < 10; i++){
    aux[0][0] = matriz[i][3];
    matriz[i][3] = matriz[i][9];
    matriz[i][9] = aux [0][0];
  }

  printf("\nA coluna 4 com a coluna 10 trocadas: \n");

  //Mostrar na tela a matriz com os termos pedidos trocados.
  for (int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      printf("%d, ", matriz[i][j]);
    }
    printf("\n");
  }
}

void questaoC(int matriz[10][10]){

  int aux[0][0];

  //Logica para fazer a troca de posições.
  for(int i = 0, j = 0, k = 9; i < 10; i++, j++, k--){
    aux[0][0] = matriz[i][j];
    matriz[i][j] = matriz[i][k];
    matriz[i][k] = aux [0][0];
  }

  printf("\nA diagonal principal com a diagonal secundária trocadas: \n");

  //Mostrar na tela a matriz com os termos pedidos trocados.
  for (int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      printf("%d, ", matriz[i][j]);
    }
    printf("\n");
  }
}

void questaoD(int matriz[10][10]){

  int aux[0][0];

  //Logica para fazer a troca de posições.
  for(int i = 0; i < 10; i++){
    aux[0][0] = matriz[4][i];
    matriz[4][i] = matriz[i][9];
    matriz[i][9] = aux [0][0];
  }
  
  printf("\nA linha 5 com a coluna 10 trocadas: \n");

  //Mostrar na tela a matriz com os termos pedidos trocados.
  for (int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      printf("%d, ", matriz[i][j]);
    }
    printf("\n");
  }
}



int main(void) {

  int matriz[10][10];

  //Usando as funções criadas anteriormente.
  preencher_matriz(matriz);
  questaoA(matriz);
  questaoB(matriz);
  questaoC(matriz);
  questaoD(matriz);
  return 0;
}