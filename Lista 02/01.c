/*Fazer um programa que leia uma seqüência de valores inteiros fornecida pelo usuário em uma
linha de entrada e conte o número de valores positivos, negativos e zeros.*/

#include <stdio.h>

int main (){

//Variaveis.
int pos = 0,neg = 0,zero = 0,n;
int continuar = 1;

//Comeco do codigo.
do{
printf("Digite um numero: ");
scanf("%d", &n);

   if (n < 0)
        ++neg;
   
   else if (n == 0)
        ++zero;
   
   else if (n > 0)
        ++pos;
   
      
if(continuar==1){//metodo para parar ou continuar o código.
   printf("Digite 1 para continuar ou 2 para parar.");
   scanf("%d", &continuar);  
}
} while (continuar == 1);

//Mostrar o resultado.  
printf("Voce tem:\n%d numero(s) negativos\n%d zero(s)\n%d numeros positvo(o)", neg, zero, pos);


    return 0;
}
