/*Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o
  nome da banda, que tipo de música ela toca, o número de integrantes e em que posição
  do ranking essa banda está dentre as suas 5 bandas favoritas. Crie um looping para
  preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e preencher,
  exiba todas as informações das bandas/estruturas.*/

#include <stdio.h>

//Criação da struct.
typedef struct banda{

  char nome[30], estilo[30];
  int nintegrante, rank;
} banda;

int main(void) {

  banda bandas[5];

  //For para rodar pelas bandas e ler as caracteristicas da banda.
  for(int i = 0; i < 5; i++){
    
    printf("Qual o nome da banda?: ");
    scanf("%s", bandas[i].nome);
    printf("Que tipo de musica esta banda toca?: ");
    scanf("%s", bandas[i].estilo);
    printf("Quantos inteegrantes tem na banda?: ");
    scanf("%d", &bandas[i].nintegrante);
    printf("Esta banda esta em qual posicao do seu top 5?: ");
    scanf("%d", &bandas[i].rank);
  }

  //For para mostrar as caracteristicas de cada banda.
  for(int i = 0; i < 5; i++){

    printf("\nNome da banda: %s\nEstilo de Musica: %s\nNumero de integrantes: %d\nPosicao no top5: %d-esimo", bandas[i].nome, bandas[i].estilo, bandas[i].nintegrante, bandas[i].rank);
    
  }
  
  return 0;
}