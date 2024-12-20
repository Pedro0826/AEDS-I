/*Implemente uma função que receba como parâmetro um array de números reais de tama-
  nho N e retorne quantos números negativos há nesse array. Essa função deve obedecer
  ao protótipo:
  int negativos(float *vet, int N);*/

#include <stdio.h>

//Criação da função para ver se tem numeros negativos.
int negativos(float *vet, int N){

float *vetPtr = vet;
int contador = 0;

  //For para percorrer e ver se tem numero negativo.
  for(int i = 0; i < N; i++){
    if(*vetPtr < 0){
      contador++;
  } vetPtr++; }

  return contador;
}

int main(void) {

  int n, negativs;

  //Declaração da array.
  float array[] = {6.6, -8.8, 5.5, 1.1, -4.4};

  //Ver quantos elementos tem na array.
  n = sizeof(array) / sizeof(array[0]);

  //usando a função criada.
  negativs = negativos(array, n);

  //Mostrando o resultado na tela.
  printf("O total de numeros negativos no array e: %d", negativs);

  return 0;
}