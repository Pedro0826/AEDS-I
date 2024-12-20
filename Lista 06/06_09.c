/*Crie um programa que utilize a o código de Cesar para três posições. Entre com uma
  string e imprima a string criptografada.*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {

  char str[30];

  //Lendo a string digitada.
  printf("Digite uma string para ser criptografada: ");
  scanf("%[^\n]", str);

  printf("%s em cesar ficara: ", str);

  //For para percorrer entre as letras e adicionar +3 na tabake ASCII e converter.
  for(int i = 0; str [i] != '\0'; i++){
    //Mostrar na tela as letras já convertidas.
    printf("%c", str[i] + 3);
  }
    
  return 0;
}