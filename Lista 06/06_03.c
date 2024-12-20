/*Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela possui.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  //Leitura da variavel.
    char palavra [30];
    int contador = 0;

    printf("Digite uma string: ");
    //Lendo a string digitada.
    scanf("%[^\n]", palavra);

    //Repeticao para contar a quantidade de letras.
    for(int i = 0; palavra [i] != '\0'; i++){
      contador++;
    }
  
  //Mostrar a quantidade de caracteres.
  printf("A sting digitade tem %d caracteres.", contador);

    return 0;
  }
  