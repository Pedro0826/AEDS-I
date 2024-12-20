/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida, faça uma função que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.*/

#include <stdio.h>

//Criação da função.
int soma_dobro (int *a, int *b){

  int soma;

  //Dobrando os valores
  *a = *a * 2;
  *b = *b * 2;

  //Somando os valores dobrados
  soma = *a + *b;

  return soma;
}

int main(){

int a, b, resultado;

  //Lendo a e b.
  printf("Digite um numero inteiro: ");
  scanf("%d", &a);
  printf("Digite outro numero inteiro: ");
  scanf("%d", &b);

  //Usando a função criada.
  
  resultado = soma_dobro(&a, &b);

  //Mostrando na tela o resultado.
  printf("A soma do dobro de a e b e: %d", resultado);
}
