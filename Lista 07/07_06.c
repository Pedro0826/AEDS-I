/*Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.*/

#include <stdio.h>

//Criação da função.
void soma_a (int *a, int *b){

  int soma;

  //Somando os valores.
  *a = *a + *b;
}

int main(){

int a, b, resultado;

  //Lendo a e b.
  printf("Digite um numero inteiro: ");
  scanf("%d", &a);
  printf("Digite outro numero inteiro: ");
  scanf("%d", &b);

  //Usando a função criada.
  soma_a(&a, &b);

  //Mostrando na tela o resultado.
  printf("A soma de a e b e: %d e o valor de b e: %d", a, b);
}
