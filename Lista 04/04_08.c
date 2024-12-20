/*Fazer uma função que recebe um número inteiro n e retorna o seu fatorial. Além disso,
  você deve fazer um procedimento exercicio08() para ler o valor de n e chamar a função
  desenvolvida nesta questão.*/

#include <stdio.h>

//Criação da função Fatorial.
int fatorial (int n){

  int fat = 1;

  //For para repetição e fazer o fatorial.
  for(int i = 1; i <= n; i++){
    fat = fat * i;
  }

  return fat; 
}
//Criação do procedimento.
void exercicio08(){

  int n;

  //Lendo N.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Mostrando na tela o resultado do fatorial.
  printf("O fatorial de %d e: %d", n, fatorial(n));
}

//Usando o procedimento no int main.
int main(void) {

  exercicio08();
  
  return 0;
}