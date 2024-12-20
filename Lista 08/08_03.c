/*Faça um procedimento que preencha uma matriz M 5 x 5. Faça uma função que receba uma matriz preenchida, calcule e retorne cada uma das somas a seguir (uma função para cada letra abaixo):
  a) da linha 4 de M
  b) da coluna 2 de M
  c) da diagonal principal
  d) da diagonal secundária
  e) de todos os elementos da matriz.
  Faça um programa que faça as devidas declarações e acione os módulos para exemplificar
  o seu uso.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher_matriz(int matriz[5][5]){
  
  srand(time(NULL));

  for (int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      matriz[i][j]= rand() % 101;
      printf("%d, ", matriz[i][j]);
    }
    printf("\n");
  }
}

int somaa (int matriz[5][5]){
  
  int soma = 0;
  
    for(int i = 0; i < 5; i++){
      soma = soma + matriz[3][i];
    }
  
  return soma;
}

int somab (int matriz[5][5]){

  int soma = 0;

    for(int i = 0; i < 5; i++){
      soma = soma + matriz[i][2];
    }

  return soma;
}

int somac (int matriz[5][5]){

  int soma = 0;

    for (int i = 0; i < 5; i++){
        soma = soma + matriz[i][i];
    }
  

  return soma;
}

int somad (int matriz[5][5]){

  int soma = 0;

    for (int i = 0, j = 4; i < 5; i++, j--){
        soma = soma + matriz[i][j];
      } 
  
  return soma;
}

int somae(int matriz[5][5]){

  int soma = 0;
  
  for (int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      soma = soma + matriz[i][j];
    }
  }
  return soma;
}
      

int main(void) {

  int matriz[5] [5], questaoA, questaoB, questaoC, questaoD, questaoE;

  preencher_matriz(matriz);

  questaoA = somaa(matriz);
  printf("\nA soma da quarta linha e: %d", questaoA);

  questaoB = somab(matriz);
  printf("\nA soma da segunda coluna e: %d", questaoB);

  questaoC = somac(matriz);
  printf("\nA soma da diagonal principal e: %d", questaoC);

  questaoD = somad(matriz);
  printf("\nA soma da diagonal secundaria e: %d", questaoD);

  questaoE = somae(matriz);
  printf("\nA soma da matriz inteira e: %d", questaoE);
  
  return 0;
}