/*Fazer um método recursivo que determine se um número é ou não primo.
*/

#include <stdio.h>

//Criação da função para primo = 1 e não primo = 0.
int numeroprimo(int n, int metade){

  //Os ifs são para método de parada.
  if(n < 1){
    metade = 0;
  } else if(metade == 1) {
    metade = 1;
  } else if(n % metade == 0){
    metade = 0;
    //Usar a função dentor da função.
  } else {
    metade = numeroprimo(n, metade - 1);
  }
  return metade;
}

int main(void) {

  int n;

  //Lendo N.
  printf("Digite um valor positivo e inteiro para n\n e saber se ele e primo ou nao: ");
  scanf("%d", &n);

  //If para condição se é primo ou não e mostrar na tela.
  if(numeroprimo(n, n / 2) == 0)
    printf("O numero nao e primo!!!");
    
  else if(numeroprimo(n, n / 2) == 1)
    printf("O numero e primo!!!");
  
  return 0;
}