/*Fazer uma função int par(int n) que recebe um número inteiro n e retorna o n-ésimo
  termo da sequência 2, 4, 6, 8, 10, 12, . . .. Além disso, você deve fazer um procedimento
  exercicio01() para ler o valor de n e chamar a função desenvolvida nesta questão.*/

#include <stdio.h>

//Criação da função.
int par(int n){
  
  int numero = 0;

  //For para repetição.
  for (int i = 1; i <= n; i++){
    numero = numero + 2;
  } 
  
  return numero;
}

void exercicio01(){
  
  int n, total;

  //Ler n.
  printf("Digite um numero inteiro e positivo para N: ");
  scanf("%d", &n);

  //Usando a função criada.
  total = par(n);

  //Mostrando o resultado.
  printf("O %d-esimo numero da sequencia e: %d", n, total);
}

//Função Principal.
int main(void) {

  exercicio01();
  
  return 0;
}