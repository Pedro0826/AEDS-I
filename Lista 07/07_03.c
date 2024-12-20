/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B, por exemplo, e, após a execução da função, A conterá o valor de B e B terá o valor de A*/

#include <stdio.h>
//Criação da função.
void trocar_valores(int *a, int *b){
  
  int aux;

  //Invertendo o valor das variaveis.
  aux = *a;
  *a = *b;
  *b = aux;
}

int main(void) {

  int num1, num2;

  //Lendo Num1 e Num2.
  printf("Digite um numero inteiro: ");
  scanf("%d", &num1);
  printf("Digite outro numero inteiro: ");
  scanf("%d", &num2);

  //Chamando a função criada.
  trocar_valores(&num1, &num2);

  //mostrando na tela com os valores invertidos.
  printf("Os valores trocados ficara: %d, %d", num1, num2);
    
  return 0;
}