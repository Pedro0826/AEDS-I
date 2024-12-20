/*Implemente um programa que abra o arquivo texto (criado no exercício anterior) e conte a
  quantidade de caracteres ‘a’ que estão presentes nele. Imprima a quantidade na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE *arquivo;

  arquivo = fopen("texto.txt", "r");

  if(arquivo == NULL){
    printf("Erro");
    return 1;
  }

  char caractere;
  int cont = 0;
  
  while((caractere = fgetc(arquivo)) != EOF){
    if(caractere == 'a' || caractere == 'A')
      cont++;
  }

  fclose(arquivo);

  printf("A quantidade de a e: %d", cont);
  
  return 0;
}