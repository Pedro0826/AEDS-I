/*Uma função double somaParSobreImpar(int n) que recebe um número inteiro n e
retorna o valor do somatório dos n primeiros termos da sequência anterior. A sua
função somaParSobreImpar deve utilizar a função parSobreImpar*/
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

//Criação da função umSobreImpar.
double umSobreImpar(int n){

double resultado = 1.0 / (1 + 2 * n);

  return resultado;
}

//Criação da função parSobreImpar.
double parSobreImpar(int n){

  double dpar = par(n);
  
  return (umSobreImpar(n) / (1 / dpar));
}

//Criação da função somaParSobreImpar.
double somaParSobreImpar(int n){

  double soma= 0;
  
  for(int i = 1; i <=n; i++){

    soma = soma + parSobreImpar(i);
  }

  return soma;
}

//Criação do procedimento.
void exercicio05(){
  
  int n;

  //Lendo n para ser usado na função
  printf("Digite um numero inteiro e superior para n: ");
  scanf("%d", &n);

  //Mostrando e usando a função somaParSobreImpar.
  printf("O soma da sequência é: %.2lf", somaParSobreImpar(n));
}

//Usando o procedimento no int main.
int main(void) {

  exercicio05();
    
  return 0;
}