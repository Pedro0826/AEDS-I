/*Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor
de E:
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!*/

#include <stdio.h>

int main (){

//Declaracao de variavel
  int n = 0, in = 0;
  float fat, total = 1;

//Leitura de n.
  printf("Digite um numero inteiro maior que 0: " );
  scanf("%d", &n);

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

  printf("O resultado e: %f", total);
  }
  
  return 0;  
}