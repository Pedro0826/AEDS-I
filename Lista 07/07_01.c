/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação*/

#include <stdio.h>

int main(void) {

  //Declaração das variaveis.
  int in = 2;
  float flo = 3.14;
  char cha = 'C';

  //Declaração dos ponteiros.
  int *inPtr;
  float *floPtr;
  char *chaPtr;

  //Salvando os ponteiros nos endereços.
  inPtr = &in;
  floPtr = &flo;
  chaPtr = &cha;

  //Mostrando os valores anteriormente.
  printf("Valor int: %d\nValor real: %f\nCharactere: %c\n", *inPtr, *floPtr, *chaPtr);

  //Mudando o valor das variaveis pelo ponteiro.
  *inPtr = 200;
  *floPtr = 6.28;
  *chaPtr = 'E';
  
  //Mostrando novamente na tela, só que com valores diferente.
  printf("Valor int: %d\nValor real: %f\nCharactere: %c", *inPtr, *floPtr, *chaPtr);
  
  return 0;
}