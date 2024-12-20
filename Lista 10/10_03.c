/*Crie uma struct chamada ponto2d que tenha como atributos os pontos x, y e z. Crie duas estruturas do tipo ponto2d chamadas ponto_inicial e ponto_final. Faça um menu com
  as seguintes opções e implemente-as:
  1 Digitar o valor do primeiro ponto
  2 Digitar os valores do segundo ponto
  3 Mostrar a distância entre os pontos
  4 Sair
  DICA: Distância entre dois pontos (x1, y1)(x2, y2): raiz quadrada de (x1−x2)2+(y1−y2)2*/

#include <stdio.h>
#include <math.h>

//Criação da struct.
typedef struct ponto2d{

  int x, y, z;

} ponto2d;

int main(void) {

  int aux = 0;
  ponto2d ponto_inicial, ponto_final;

  //While para o menu rodar até o usuario digitar 4.
   while(aux != 4){
     printf("Escolha uma opcao: \n1 Digitar o valor do primeiro ponto\n2 Digitar os valores do segundo ponto\n3 Mostrar a distância entre os pontos\n4 Sair\n");
    scanf("%d", &aux);

  //Condições para o que o usuario digitou.
  if(aux == 1){
    printf("Digite o valor do primeiro ponto: ");
    scanf("%d", &ponto_inicial.x);
    scanf("%d", &ponto_inicial.y);
  }
    
  else if(aux == 2){
    printf("Digite o valor do segundo ponto: ");
    scanf("%d", &ponto_final.x);
    scanf("%d", &ponto_final.y);
  }
    
  else if(aux == 3){
    
    float dist;

    dist = sqrt((pow((ponto_inicial.x - ponto_final.y),2)) + pow((ponto_inicial.y - ponto_final.y), 2));

    printf("A distancia e: %.2f\n", dist);
  }

  else if(aux==4){
    printf("Voce saiu");
  }
    
  } 
  
  return 0;
}