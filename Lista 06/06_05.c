/*Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada
  dentro da mesma variável. Em seguida, imprima a string invertida.*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char str[30];
  int contador, inverso;

  //Lendo a string digitada.
  printf("Digite uma string: ");
  scanf("%s", str);

  contador = strlen(str);

  //For para andar entre os vetores.
  for (int i = 0, inverso = contador - 1; i < inverso; i++, inverso--){
    
    char strtemp = str[i];//Criei variavel para não perder o vetor direcionado que daria errado.
         str[i] = str[inverso];
         str[inverso] = strtemp;
  }

  //Mostrando na tela a string invertida.
  printf("A string invertida fica: %s", str);
  
  return 0;
}