/*Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
O algoritmo deve escrever cada termo gerado e o valor final de S.*/

#include <stdio.h>

int main (){

//Declaracao das variaveis.
  int n = 0, denominador = 1;
  float total = 1, soma = 0;

//Leitura de n.
  printf("Digite N: ");
  scanf("%d", &n);

//Impedir o usuario digitar 0 ou menor que 0.
  if(n <= 0){
  printf("ERRO!");
  } else {
    
//For para loop.
  for(float in = 1; in <= n; in++){
    
    total = 1.0 / denominador;
    soma = soma + total;
    denominador++;
    //Mostrar cada valor e o total da soma.
    printf("%f, ", total);
  }
    printf("\nA soma total e: %f", soma);
  }


  return 0;  
}
