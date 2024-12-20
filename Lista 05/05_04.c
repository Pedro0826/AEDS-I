/*Fazer um método recursivo que imprima um número natural em base binária*/

#include <stdio.h>

//Criando o procedimento para converter numero de base decimal natural em binario.
void natuParaBin (int n){

  //Metodo de parada
  if(n > 0){

  //Usando o procedimento em nele mesmo.
   natuParaBin(n / 2);

  //Mostrando na tela o resultado.
   printf("%d", n % 2);
  }
}


int main(void) {

  int n;

  //Lendo valor de n.
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  //Se o usuario quiser o 0 em binário, será mostrado por aqui.
  if(n == 0){
    printf("%d em binario sera: 0 ", n);
    return 0;
  } 

  //Mostrando na tela e usando o procedimento no int main.
  printf("%d em binario sera: ", n);
  natuParaBin(n);
  
  return 0;
}