/*Na questão anterior crie uma função que peça o nome de uma banda ao usuário e diga se
  ela está entre suas bandas favoritas ou não*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Criação da struct.
typedef struct banda{

  char nome[30], estilo[30];
  int nintegrante, rank;
} banda;

void comparar(banda bandas[]){

  char banda[20];
  int resp;
  
  printf("\nDigite o nome de uma banda para ver se esta no top: ");
  scanf("%s", banda);//Lendo o nome da banda.

  for(int i = 0; i < 5; i++){//Raciocinio para ver se a bandas esta no top.
    if (strcmp(banda, bandas[i].nome) == 0) {
            resp = 1;
            break;   
        }
    }

  //Condição para saber o que vai printar.
  if (resp) {
        printf("Essa banda está nos favoritos!\n");
    } else {
        printf("Essa banda não está nos favoritos!\n");
    }
}

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

  comparar(&bandas[5]);

    return 0;
  }