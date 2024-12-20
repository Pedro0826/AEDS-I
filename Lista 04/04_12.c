/*Fazer uma função que recebe um número inteiro n e imprima os n primeiros múltiplos
  de 5. Além disso, você deve fazer um procedimento exercicioXX() para chamar a função
  desenvolvida nesta questão.*/

#include <stdio.h>

//Criação do procedimento mulitiplos5
void multiplos5 (int n){

  int num = 0;

  //Mostrar na tela a frase.
  printf("Os primeiros %d primeiros multiplos de 5 e: ", n);
  
  //For para calcular os multiplos.
  for(int i = 1; i <=n; i++){

    num = 5 * i;

    //Mostrar na tela os multiplos.
    printf("%d, ", num);
  }
}

//Criaçao do procedimento exercicio12.
void exercicio12(){

  int n;
  
//Leitura de n
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Usando o procedimento criado anteriormente.
  multiplos5(n);
}

//Usando exercicio12 no int main.
int main(void) {

  exercicio12();
  
  return 0;
}