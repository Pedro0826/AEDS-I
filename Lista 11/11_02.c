/*Crie um programa que receba um texto do usuário e grave o texto em um arquivo.*/

#include <stdio.h>

int main(void) {

  FILE *arquivo;
  char palavra[10];

  arquivo = fopen("texto.txt", "w");

  if(arquivo == NULL){
    printf("ERRO!!!!!");
    return 1;
  }

  fgets(palavra, sizeof(palavra), stdin);

  fprintf(arquivo, "%s\n", palavra);

  fclose(arquivo);

  printf("Arquivo criado com sucesso!!!");

  return 0;
}