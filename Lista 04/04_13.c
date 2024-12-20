/*Fazer uma função que recebe um número inteiro n e retorna o n-ésimo termo da sequência
  de Fibonacci. Além disso, você deve fazer um procedimento exercicioXX() para chamar
  a função desenvolvida nesta questão.*/

#include <stdio.h>

//Criação da função para o fibonacci.
int nfibonacci(int n){

  int num1 = 1, num2 = 1, fib;

  if(n == 1)
    return num1;
  
  if(n == 2)
    return num2;

  for(int i = 3; i <= n; i++){
    fib = num1 + num2;
    num1 = num2;
    num2 = fib;
  }

  return fib;
}

//Criando procedimento exercicio13.
void exercicio13(){

  int n;

  //Leitura de n
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Mostrando o resultado.
  printf("o %d-esimo termo da sequencia de Fibonacci e: %d", n, nfibonacci(n));
  
}

//Usando o procedimento no int main.
int main(void) {

  exercicio13();
  
  return 0;
}