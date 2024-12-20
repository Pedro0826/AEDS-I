/*Fazer a função que recebe um número inteiro n, um número real x e retorna o n-ésimo
  termo da sequência abaixo. Utilize a função desenvolvida na letra a da questão anterior.
  Além disso, você deve fazer um procedimento exercicio06() para ler os valores de n e de
  x, e chamar a função desenvolvida nesta questão.2x3 , 4x2/5 , 6x3/7 , 8x4/9 , 10x5/11 , . . .*/

#include <stdio.h>
#include <math.h>

double par(int n){

  double numero = 0;

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

  return (umSobreImpar(n) / (1 / par(n)));
}

//Criaçao da função pedida.
double parSobreImparComXaoQuadrado (int n, float x){

  double resultado = 0;

  for (int i = 1; i <= n; i++){
    resultado = (parSobreImpar(n) / (1 / pow(x,i)));
  }

  return resultado;
}

//Criação do procedimento pedido.

void exercicio06(){

  int n, x;

  //Lendo n e x.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);
  printf("Digite um valor real e positivo para x: ");
  scanf("%d", &x);
  
  //Mostrando na tela o resultado.
  printf("O %d-ésimo termo da sequência e: %.2lf", n, parSobreImparComXaoQuadrado (n, x));
}

//Usando o procedimento no int main.
int main(void) {
  
  exercicio06();
    
  return 0;
}