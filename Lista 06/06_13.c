//Faça um algoritmo para percorrer uma string e imprimir a quantidade de caracteres minusculos.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  //Leitura da variavel.
    char palavra [30];
    int contador = 0, qmai = 0;

    printf("Digite uma string: ");
    //Lendo a string digitada.
    scanf("%[^\n]", palavra);
    //Contando a quantidade de algarismos.
    contador = strlen(palavra);

    for(int i = 0; i <= contador; i++){
      //Condição para saber se é maiusculo.
      if(palavra [i] >= 65 && palavra [i] <=90)
        qmai++;
    }

  //Mostrando na tela o resultado.
printf("A quantidade de letras maiuscula e: %d", qmai);

    return 0;
  }