//Faça um programa que imprima todos os elementos da série de Fibonacci menores que L.

//A diferenca com o exercicio 7, foi que precisei adicionar uma variavel e um and no while, para a condicao desta nova variavel ser maior que o resultado que será mostrado na tela.
//Se for menor, já ira parar.

#include <stdio.h>

int main () {

int num1 = 0, num2 = 1, fib = 0, L, nl; //Declaracao das variaveis.

  //Coletar a quantidade de numeros.
  printf("Digite L (Ira aparecer somente os da sequencia de fibonacci menores do que L.");
  scanf("%d", &L);
  printf("Os numeros sao: ");
  nl = L;

  //Fibonacci e mostrar na tela os numeros.
  while(L > 0 && num1 < nl){

  printf("%d, ", num1);
    
    fib = num1 + num2;
    num1 = num2;
    num2 = fib;
    L--;
  }




  return 0;
}