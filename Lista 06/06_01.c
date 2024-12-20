//Faça um programa que leia e imprima uma string.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  //Leitura da variavel.
  char palavra [20];

  printf("Digite uma string: ");
  //Lendo a string digitada.
  scanf("%[^\n]", palavra);
  //Mostrando na tela a string digitada.
  printf("A string digitada é: %s", palavra);
  return 0;
}