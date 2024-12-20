#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE *f1, *f2, *conc;
  char frase;

  f1 = fopen("texto1.txt", "r");

  if(f1 == NULL){
    printf("Erro");
    return 1;
  }

  f2 = fopen("texto2.txt", "r");

  if(f2 == NULL){
    printf("Erro");
    return 1;
  }

  conc = fopen("texto3.txt", "w");

  if(conc == NULL){
    printf("Erro");
    return 1;
  }

  while((frase = fgetc(f1)) != EOF){
    fputc(frase, conc);
  }

  fclose(f1);
  
  while((frase = fgetc(f2)) != EOF){
    fputc(frase, conc);
  }

  fclose(f2);
  fclose(conc);
  
  return 0;
}