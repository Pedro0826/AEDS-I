/*Fazer um método recursivo que multiplique dois números naturais através de somas su-
cessivas*/

#include <stdio.h>

//Criação da função multiplicação.
int multiplicacao(int a, int b){

int n = 0;
  
//Método de parada.
if(b == 1){
  n = a;
//Conta para fazer multiplicao em forma de somas concessivas.Usando a formula criada nela mesma.
} else {
  n = a + multiplicacao(a, b -1);
}

return n;
}

int main(void) {

  int x, y;

  //Lendo valor de x.
  printf("Digite um valor inteiro e positivo para x: ");
  scanf("%d", &x);
  
  //Lendo valor de y.
  printf("Digite um valor inteiro e positivo para y: ");
  scanf("%d", &y);

  //Mostrando o resultado da "Multiplicação", e usando a formula criada anteriormente no int main.
  printf("O resultado da multiplicacao de %d por %d e: %d", x, y, multiplicacao(x, y));
  
  return 0;
}