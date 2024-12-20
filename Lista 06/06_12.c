//Faça um algoritmo para percorrer uma string e imprimir a quantidade de caracteres minusculos.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  //Leitura da variavel.
    char palavra [30];
    int contador = 0, qminu = 0;

    printf("Digite uma string: ");
    //Lendo a string digitada.
    scanf("%[^\n]", palavra);
    //Contando a quantidade de algarismos.
    contador = strlen(palavra);
   
    for(int i = 0; i <= contador; i++){
      //Condição para saber se é minusculo.
      if(palavra [i] >= 97 && palavra [i] <=122)
        qminu++;
    }

  //Mostrando na tela o resultado.
printf("A quantidade de letras minusculas e: %d", qminu);

    return 0;
  }