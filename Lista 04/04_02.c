/*Fazer uma função void mostrarParesEmOrdemDecrescente(int n) que recebe um número
  inteiro n e mostra na tela (em ordem decrescente) todos os valores menores que n para
  a sequência do exercício anterior. A sua função mostrarParesEmOrdemDecrescente deve
  utilizar a função par desenvolvida na questão anterior. Além disso, você deve fazer um
  procedimento exercicio02() para ler o valor de n e chamar a função desenvolvida nesta
  questão.*/

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

//Função Ordem Decrescente.
void mostrarParesEmOrdemDecrescente(int n){

  printf("A sequencia decrescente sera: ");
  //For para fazer a sequencia.
  for (int i = n/2-1; i > 0; i--){
    printf("%d, ", par(i));
  }
}

//Procedimento.
void exercicio02(){

  int n;

  //Ler n para ser usado nas funções criadas.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Usando a função.
  mostrarParesEmOrdemDecrescente(n);
  
}

//Chamando o procedimento no main.
int main(void) {

  exercicio02();
    
  return 0;
}