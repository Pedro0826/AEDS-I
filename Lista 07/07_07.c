/*Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase
  (máx. 100 caracteres) e armazená-la num vetor. Imprima a frase lida trocando as vogais,
  isto é, trocar ’a’ pelo ’u’, ’e’ pelo ’o’, ’i’ pelo ’u’, ’o’ pelo ’a’ e o ’u’ pelo ’e’. Usar uma função void (procedimento) para realizar a troca e uma função para realizar a impressão
  da frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Criação da função para trocar as vogais.
void procedimento(char *a){

  //For para ir passando de vetor em vetor.
  for(int i = 0; i < strlen(a); i++){
    
    if(a[i] == 'a')
      a[i] = 'u';
    else if(a[i] == 'A')
      a[i] = 'U';

    else if(a[i] == 'e')
      a[i] = 'o';
    else if(a[i] == 'E')
      a[i] = 'O';

    else if(a[i] == 'i')
      a[i] = 'u';
    else if(a[i] == 'I')
      a[i] = 'U';

    else if(a[i] == 'o')
      a[i] = 'a';
    else if(a[i] == 'O')
      a[i] = 'A';

    else if(a[i] == 'u')
      a[i] = 'e';
    else if(a[i] == 'U')
      a[i] = 'E';
  }
}

//Função para mostrar o resultado.
  void mostrar_resultado(char *str){

    printf("A string com as vogais trocadas ficara: %s", str);
  
}

int main(void) {

  char str [100];

  //Lendo a frase digitada pelo usuario.
  printf("Digite uma frase: ");
  scanf("%[^\n]", str);

  procedimento (str);

  mostrar_resultado (str);
  
  return 0;
}