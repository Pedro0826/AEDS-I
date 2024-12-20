/*Fazer uma função que recebe um número inteiro n, um real x e retorna o produto dos n
  primeiros termos da sequência acima. Utilize a função desenvolvida na questão anterior.
  Além disso, você deve fazer um procedimento exercicio07() para ler os valores de n e de
  x, e chamar a função desenvolvida nesta questão.*/

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

//Criaçao da função parSobreImparComXaoQuadrado.
double parSobreImparComXaoQuadrado (int n, float x){

  double resultado = 0;

  for(int i = 1; i <= n; i++){
    resultado = (parSobreImpar(n) / (1 / pow(x,i)));
  }

  return resultado;
}

//Criação da função pedida.
double ProdutoParSobreImparComXaoQuadrado(int n, float x){

  double produto = 1;

  for(int i = 1; i <= n; i++){

    produto = produto * parSobreImparComXaoQuadrado (i, x);
  }

  return produto;
}

//Criação do procedimento.
void exercicio07(){
  
  int n, x;

  //Lendo n e x.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);
  printf("Digite um valor real e positivo para x: ");
  scanf("%d", &x);

  //Mostando o resultado na tela.
  printf("produto dos %d primeiros termos da sequencia e: %.2lf", n, ProdutoParSobreImparComXaoQuadrado(n, x));
}

//int main usando o procedimento criado anteriormente.
int main(void) {
  
  exercicio07();
  
  return 0;
}