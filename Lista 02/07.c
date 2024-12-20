/*Faça um programa que imprima os L primeiros elementos da série de Fibonacci. Por
exemplo, se o usuário digitou o número 40, deverão ser apresentados os 40 números da
sequência na tela.*/

#include <stdio.h>

int main () {

int num1 = 0, num2 = 1, fib, l; //Declaracao das variaveis.

  //Coletar a quantidade de numeros.
  printf("Digite a quantidade de elementos da serie Fibonacci voce quer: ");
  scanf("%d", &l);
  printf("Os numeros sao: ");

  //Fibonacci e mostrar na tela os numeros.
  while(l > 0){

  printf("%d, ", num1);
    
    fib = num1 + num2;
    num1 = num2;
    num2 = fib;
    l--;
  }




  return 0;
}