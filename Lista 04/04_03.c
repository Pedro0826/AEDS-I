/*Fazer uma função double umSobreImpar(int n) que recebe um número inteiro n e retorna o
  n-ésimo termo da sequência 1 / 3 , 1 / 5 , 1 / 7 , 1 / 9 , 1 / 11 , . . .. Além disso, você deve fazer um procedimento exercicio03() para ler o valor de n e chamar a função desenvolvida nesta questão.*/

#include <stdio.h>

//Criação da função.
double umSobreImpar(int n){

  double resultado = 1.0 / (1 + 2 * n);
  
    return resultado;
  }

//Criando o procedimento.
void exercicio03(){

  int n;

  //Lendo n.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Mostrando na tela o resultado.
  printf("O %d-esimo termo da sequencia e: %.2lf", n, umSobreImpar(n));

}

//Usando o procedimento no main.
int main(void) {

  exercicio03();
  
  return 0;
}