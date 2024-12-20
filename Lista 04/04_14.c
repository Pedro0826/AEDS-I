/*Fazer uma função que recebe um número inteiro n e retorna o maior elemento da sequên-
  cia de Fibonacci que seja menor que n. Além disso, você deve fazer um procedimento
  exercicioXX() para chamar a função desenvolvida nesta questão.*/

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

//Criação da função do maior numero menor que n no fibonacci.
int maiornfibonacci(int n){

  int in = n;

  //While para fazer a verificação.
  while (nfibonacci(in) > n - 1){
    --in;
}

  return nfibonacci(in);
}

//Criação do procedimento exercicio14.
void exercicio14(){

  int n;
  
  //Leitura de n
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Mostrar na tela o resultado pedido.
  printf("Maior elemento da sequencia de Fibonacci que seja menor que %d e: %d", n, maiornfibonacci(n));
}

//usando o procedimento criado no int main.
int main(void) {

  exercicio14();
  
  return 0;
}