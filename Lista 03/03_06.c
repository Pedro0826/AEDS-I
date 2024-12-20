/*Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o
valor de S, calculado segundo a fórmula abaixo.
S = 1 + 1/1! + 1/2! + 1/3! + ...+1 /N!
Faça um programa que leia N e imprima o valor retornado pela função.*/

#include <stdio.h>

float formula_fatorial (int n){
  
  //Declaracao de variavel
    int in = 0;
    float fat, total = 1;

  //Impedir o usuario digitar 0 ou menor que 0.
    if(n <= 0){
    printf("ERRO!");
      
    } else {   
  //Fazer a fatoracao e loop.
    while (n > 0){
      in = n;
      fat = 1;
       while (in > 0){
         fat = fat * in;
         in--;
       }

  //Fazer o total e mostrar na tela.
      total = total + (1 / fat);
      n--;
    }
    }

    return total;
}

//Usando a funcao principal.
int main(void) {

  //Variavel.
  int N;
  float S;

  //Perguntando N para usar na formula.
  printf("Digite um valor inteiro e positivo para N: ");
  scanf("%d", &N);
  //Usando a formula criada, testando com n = 3.
  S = formula_fatorial(N);
  printf ("O resultado de S e: %f", S);
  
  return 0;
}