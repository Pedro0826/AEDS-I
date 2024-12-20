/*Faca um programa que leia uma string e imprima uma mensagem dizendo se ela eh um
  palindromo ou nao.*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char str[30];
  int contador;

  //Lendo a string digitada.
  printf("Digite uma string: ");
  scanf("%s", str);

  contador = strlen(str) - 1;

  //Condição para palindromo
  if(str[0] == str[contador] && str[1] == str[contador - 1])
    printf("Esta palavra e um palindromo!!!");
    else
    printf("Esta palavra nao e um palindromo!!!");
  
  return 0;
}