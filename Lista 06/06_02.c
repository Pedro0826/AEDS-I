//Faça um programa que leia uma string e imprima as quatro primeiras letras dela.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  //Leitura da variavel.
  char palavra [30];

  printf("Digite uma string: ");
  //Lendo a string digitada.
  scanf("%[^\n]", palavra);
  //Mostrando na tela a string digitada.
  printf("As 4 primeiras letras da string digitada é: ");

  //Repeticao para mostrar somente as 4 primeiras letras
  for(int i = 0; i < 4; i++){
    printf("%c", palavra[i]);
  }
  
  return 0;
}