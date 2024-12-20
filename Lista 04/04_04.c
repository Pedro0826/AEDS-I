/*Fazer uma função double somaUmSobreImpar(int n) que recebe um número inteiro n
  e retorna o valor do somatório dos n primeiros termos da sequência anterior. A sua
  função somaUmSobreImpar deve utilizar a função umSobreImpar desenvolvida na questão
  anterior. Além disso, você deve fazer um procedimento exercicio04() para ler o valor de
  n e chamar a função desenvolvida nesta questão.*/

#include <stdio.h>

//Função criada no exercicio 3.
double umSobreImpar(int n){

double resultado = 1.0 / (1 + 2 * n);

  return resultado;
}

//Função criada para somar.
double somaUmSobreImpar(int n){
  
  double soma = 0;

  //For para repetição e somar.
  for(int i = 1; i <= n; i++){

    soma = soma + umSobreImpar(i);
  }
  return soma;
}

//Criação do procedimento.
void exercicio04(){

  int n;

  //Ler n.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Mostrar na tela e já usando a função anterior.
  printf("O resultado do somatorio sera: %.2lf", somaUmSobreImpar(n));

}

//Codigo main.
int main(void) {

  exercicio04();
  
  return 0;
}