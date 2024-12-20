#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE *arquivo;
  int nlinha = 0;
  char linha[100];
  
  arquivo = fopen("texto1.txt", "r");

  if(arquivo == NULL)
    return 1;

  while (fgets(linha, sizeof(linha), arquivo)){
    printf("%s", linha);
    nlinha++;
  }

  printf("O arquivo possui %d linhas", nlinha);
  return 0;
}