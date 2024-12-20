/*Fazer um método recursivo que calcule o MDC (máximo divisor comum) de dois inteiros positivos m e n*/

#include <stdio.h>

//Criação da função.
int mdc(int m, int n) { 

  int resultado;
  
  //Condição de parada.
  if(n == 0){
    resultado = m;
  } else {
    //Chamando a função dentro da função.
    resultado = mdc(n, m % n);
  }
  
  return resultado;
}

int main () {
    int m, n, func;

    //Ler m e n.
    printf("Escreva dois numeros inteiros e aleatorios: ");
    scanf("%d", &m); 
    scanf("%d", &n);

    //Usando a função.
    func = mdc(m,n);

    //Mostrando o resultado.
    printf("O MDC de %d e %d e: %d", m, n, func);
    return 0;
}