/*Fazer um método recursivo que recebe um número inteiro e positivo n e calcula o somatório
abaixo:
n + (n − 1) + . . . + 1 + 0*/

#include <stdio.h>

//Criação da função.
int exercicio3 (int n){

int soma = 0;

//If como método de parada.
if(n == 0){
  soma = 0;
} else {
  //Usando a fórmula dentro da fórmula.
  soma = n + exercicio3(n - 1);
}

  return soma;
}

//uysando a função criada dentro do int main.
int main(void) {

  int n;

  //Lendo valor de n.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Mostrando na tela o resultado.
  printf("O resultado do somatorio e: %d", exercicio3(n));
  return 0;
}