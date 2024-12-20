//Faça um algoritmo para percorrer uma string e imprimir apenas as vogais.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){

  char palavra[30];

  //Lendo a string.
  printf("Digite uma string: ");
  scanf("%[^\n]", palavra);

  printf("As vogais digitadas são: ");

  //For para percorrer entre as letras da string e descobrir se tem vogal.
  for(int i = 0; strlen(palavra) >= i; i++){

    if (palavra[i] == 'A' || palavra[i] == 'a')
      printf("%c,", palavra[i]);
  
    else if (palavra[i] == 'E' || palavra[i] == 'e')
    printf("%c,", palavra[i]);
  
    else if (palavra[i] == 'I' || palavra[i] == 'i')
    printf("%c,", palavra[i]);
  
    else if (palavra[i] == 'O' || palavra[i] == 'o')
    printf("%c,", palavra[i]);
  
    else if (palavra[i] == 'U' || palavra[i] == 'u')
    printf("%c,", palavra[i]);
  }

  return 0;
}