/*Crie um programa que escreva de 1 até 10 em um arquivo, armazenando um número por
  linha.*/

#include <stdio.h>

int main(void) {

  FILE *arquivo;

  arquivo = fopen("numeros.txt", "w");

  if(arquivo == NULL){
    printf("ERRO!!!!!");
    return 1;
  }

  for(int i = 1; i <= 10; i++){
    fprintf(arquivo, "%d\n", i);
  }

  fclose(arquivo);

  printf("Arquivo criado com sucesso!!!");
  
  return 0;
}