/*Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela*/

#include <stdio.h>

//Criação da função.
void menor_maior (int *a, int *b){

  int aux;

  //Invertando se b for maior.
  if(*a < *b){
    aux = *a;
    *a = *b;
    *b = aux;
  }
}

int main(){
  
int a, b;

  //Lendo a e b.
  printf("Digite um numero inteiro: ");
  scanf("%d", &a);
  printf("Digite outro numero inteiro: ");
  scanf("%d", &b);

  //Usando a função criada.
  menor_maior(&a, &b);

  //Mostrando na tela o resultado.
  printf("O maior numero e o menor respectivamente e: %d, %d", a, b);
}
