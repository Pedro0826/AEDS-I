/*Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o
valor de S, calculado segundo a fórmula abaixo.
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3)
Faça um programa que leia N e imprima o valor retornado pela função.*/

#include <stdio.h>
#include <math.h>

//Criação da função.
float funcaoS (int N){

  //Variaveis da função.
  float S, Stotal = 0, n = 1.0;

  //For para repetição dependendo do N.
  for(int i = 1; i <= N; i++){
    S = (((pow(n,2)) + 1) / (n + 3));
    Stotal = Stotal + S;
    n++;
  }
  return Stotal;
}

//Função principal.
int main(void) {

  int N;
  float valor;

  //Leitura de N.
  printf("Digite um valor inteiro e positivo para a funcao: ");
  scanf("%d", &N);

  //Usando a função.
  valor = funcaoS (N);

  //Mostrar na tela o resultado.
  printf("O resultado da funcao e: %f", valor);
  
  return 0;
}