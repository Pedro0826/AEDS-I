/*Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
  valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável,
  o segundo menor valor na variável do meio, e o maior valor na última variável. A função
  deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes.
  Exiba os valores ordenados na tela.*/

#include <stdio.h>

//Criação da função para colocar em ordem crescente.
 int colocar_ordem(int *num1,int *num2,int *num3){

  int temp;

   //Metodo para colocar em ordem crescente.
   if (*num1 > *num2) {
       temp = *num1;
       *num1 = *num2;
       *num2 = temp;
   }

   if (*num1 > *num3) {
       temp = *num1;
       *num1 = *num3;
       *num3 = temp;
   }

   if (*num2 > *num3) {
       temp = *num2;
       *num2 = *num3;
       *num3 = temp;
   }

  if(*num1 == *num2 && *num2 == *num3){
    return 1;
  }

   return 0;
}


int main(void) {

  int num1, num2, num3;

  //Lendo os 3 numeros
  printf("Digite 3 numeros inteiros: \n");
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);

  //Mostrando na tela o resultado da sequencia.
  printf("o resultado e: %d\n", colocar_ordem(&num1, &num2, &num3));

  //Mostrando o resultado de 0 ou 1.
  printf("A ordem crescente ficou: %d, %d, %d ", num1, num2, num3);
  
  return 0;
}