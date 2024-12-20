/*Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices
  para percorrer o array, apenas aritmética de ponteiros.*/

#include <stdio.h>

//Criação para imprimir a sequencia do array por ponteiro.
void imprimir_array (int *array){
  
  printf("O array e: ");
  
  for(int i = 0; i < 5; i++, array++){
    printf("%d, ", *array);
  }
}

int main(void) {

  //Declarando a array.
  int array[] = {5, 1, 3, 7, 9};

  //Usando a funçao criada
  imprimir_array(&array[0]);
  
  return 0;
}