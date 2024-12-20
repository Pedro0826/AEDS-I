/*Escreva uma função que receba um V de inteiros tam e os endereços de duas variáveis
  inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array.
  Escreva também uma função main que use essa função.*/

#include <stdio.h>

//Criação da funçao para ver o maior e o menor numero da array.
void maior_menor (int *V, int tam, int *min, int *max){

  *min = *V;
  *max = *V;

  //For e if para ver os números.
  for(int i = 1; i < tam; i++){
    
    if(V[i] < *min)
      *min = *(V + i);
      
    else if(V[i] > *max)
      *max = *(V + i);
      
  }
}

//Função Principal.
int main(void) {

  int min, max, tam;
  int V[] = {5, 3, 1, 4, 2, 7};

  //Declarando o tamanho de V.
  tam = sizeof(V) / sizeof(V[0]);

  //Usando a função criada.
  maior_menor (V, tam, &min, &max);

  //Mostrando na tela o resultado.
  printf("O menor e o maior numero consecutivamente e: %d, %d", min, max);

  return 0;
}