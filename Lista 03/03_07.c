/*Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo.
  A função deve retornar um valor lógico (true ou false). Faça um programa que lê N
  números e para cada um deles exibe uma mensagem informando se ele é positivo ou não,
  dependendo se foi retornado verdadeiro ou falso pela função.*/

#include <stdio.h>

//Criação da função.
char true_false(int n){

  //Variavel
  int tf = 1;

    //If para saber se é positivo ou negativo.
    if (n > 0)
      tf = 1;

    else if (n < 0)
      tf = 0;    

  return tf;
}

//Função principal.
int main(void) {

  //Variaveis.
  int n, num, tf;

  //Leitura de N.
  printf("Quantos numeros voce vai querer saber?: ");
  scanf("%d", &n);

  //For para repetição.
  for (int i = 0; i < n; i++){

    //Leitura do numero.
    printf("Digite um numero: ");
    scanf("%d", &num);

    //Uso da formula.
    tf = true_false(num);

    //If para mostrar na tela positivo ou negativo.
    if (tf ==0){
      printf("Negativo!!!\n");
    } else {
      printf("Positivo!!!\n");
    } 
    
  }
  
  return 0;
}