//Faça um programa que leia uma string e a imprima de trás para frente.

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
    //Contando a quantidade de algarismos.
    contador = strlen(palavra);
    //Mostrar na tela o resultado
    printf("A palavra digitada ao contrario é: ");

    //Repeticao para mostrar de tras para frente.
    for(int i = contador; i >= 0; i--){
      ////Mostrar na tela o resultado
      printf("%c", palavra[i]);
    }

    return 0;
  }