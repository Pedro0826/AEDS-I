#include <stdio.h>

int main(void) {

  FILE *texto;
  int n, soma = 0;

  printf("Digite um numero: ");
  scanf("%d", &n);

  printf("Os divisores de %d é: ", n);
  
  for(int i = 0; i <= (n/2); i++){
    if(n%i == 0){
      soma += i;
      printf("%d", i);
    }
  }

  texto = fopen("texto.txt", "w");

  if(texto == NULL)
    return 1;

  fprintf(texto, "A soma dos divisores e %d", n);

  fclose(texto);

  return 0;
}