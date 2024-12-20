/*Faça um procedimento que receba e preencha um vetor com as notas de uma turma de 10 alunos. Faça um outro procedimento que receba um vetor preenchido com as notas, calcule a média da turma e conte quantos alunos obtiveram nota acima da média. Esse procedimento deve exibir a média e o resultado da contagem. Faça um programa que declare as devidas variáveis e acione os procedimentos.*/

#include <stdio.h>

//Criar procedimento para ler as notas.
void receber_notas(int *array){

  int num;
  
  //For para ler a nota de cada aluno.
  for(int i = 0; i < 10; i++){
    printf("Digite a %d° nota: ", i+1);
    scanf("%d", &num);
    array[i] = num;
  }
}

//Criar procedimento para fazer a media dos alunos.
void media_alunos(int *array){

  int total = 0, alunos = 0;
  float media = 0;

  //For para a soma de todas a notas.
  for(int i = 0; i < 10; i++){
    total = total + array[i]; 
  }

  //Fazendo a média.
  media = total/10.0;

  //For e if para ver quais alunos estão acima da média.
  for(int i = 0; i < 10; i++){
    if(array [i] >= media){
      alunos++;
    }
  }  

  //Mostrando o resultado.
  printf("A media dos alunos foram: %.2f\n", media);
  printf("Os alunos que ficaram na media foram: %d", alunos);
}


int main(void) {

  int array[10];
  
  //Usando os procedimentos.
  receber_notas(array);
  media_alunos(array);
  
  return 0;
}