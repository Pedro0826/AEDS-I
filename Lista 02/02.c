/*Adaptar o programa acima para que ele calcule o percentual dos valores positivos, negativos
e zeros em relação ao total de valores fornecidos.*/

#include <stdio.h>

int main (){

  //Variaveis.
  float pos = 0, neg = 0, zero = 0, n, total;
  int continuar = 1;
  float ppos, pneg, pzero;

  //Comeco do codigo.
  do{
  printf("Digite um numero: ");
  scanf("%f", &n);

     if (n < 0)
          ++neg;

     else if (n == 0)
          ++zero;

     else if (n > 0)
          ++pos;


  if(continuar == 1){ //metodo para parar ou continuar o código.
     printf("Digite 1 para continuar ou 0 para parar.");
     scanf("%d", &continuar);  
  }
  } while (continuar == 1);

  //Calculando porcentagem.
  total = neg + zero + pos;
  pneg = (neg / total) * 100;
  pzero = (zero / total) * 100;
  ppos = (pos / total) * 100;
  
  //Mostrar o resultado e sua porcentagem 
  printf("Voce tem:\n%.0f numero(s) negativos (%.2f%%)\n%.0f zero(s) (%.2f%%)\n%.0f numeros positvo(o) (%.2f%%)", neg, pneg, zero, pzero, pos, ppos);


    return 0;
}