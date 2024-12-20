#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE *arquivo;
  int n, nvogal = 0;
  char letra;
  
  printf("Digite o valor para n: ");
  scanf("%d", &n);

  arquivo = fopen("texto1.txt", "r");

  if(arquivo == NULL)
    return 1;

  while ((letra = fgetc(arquivo)) != EOF ){
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
      nvogal++;
  }

  printf("A quantidade de vogais é: %d", nvogal);
  
  return 0;
}