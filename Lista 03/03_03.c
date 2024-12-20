/*Faça um procedimento que recebe 3 valores inteiros por parâmetro e os exiba em ordem
crescente. Faça um programa que leia N conjuntos de 3 valores e acione o procedimento
para cada conjunto. (N deve ser lido do teclado)*/

#include <stdio.h>

//Criação da função.
void ordemcrescente (int a, int b, int c){

  //Condição para fazer a ordem crescente.
  if( a < b && a < c){
    if ( b < c) {
       printf ( "O valor na ordem crescente e: %d, %d, %d", a, b, c);
    } else {
       printf ("O valor na ordem crescente e: %d, %d, %d", a, c, b);
    }
    }

  else if( b < a && b < c){
    if ( a < c) {
       printf ( "O valor na ordem crescente e: %d, %d, %d", b, a, c);
    } else {
       printf ("O valor na ordem crescente e: %d, %d, %d", b, c, a);
    }
    }

  else if( a < b ){
       printf ( "O valor na ordem crescente e: %d, %d, %d", c, a, b);
    } else {
       printf ("O valor na ordem crescente e: %d, %d, %d", c, b, a);
    }
    }

//Testando e começando o código.
int main(){

  int N;

  //Lendo a quantidade de conjuntos.
  printf("Digite a quantidade de conjuntos em ordem crescente: ");
  scanf("%d", &N);

  //Repetição da função a partir de N.
  for (int i = 0; i < N; i++) {
      int a, b, c;

      printf("\nDigite o conjunto de valores com espaco(Ex: 1 2 3): ", i + 1);
      scanf("%d %d %d", &a, &b, &c);

      ordemcrescente(a, b, c);
  }
  return 0;
}
