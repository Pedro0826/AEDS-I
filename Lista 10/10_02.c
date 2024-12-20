/*Crie uma struct para controlar ações de uma bolsa de valores com as seguintes informa-
ções:
• Nome da companhia
• Área de atuação da companhia
• Valor atual da ação (em reais)
• Valor anterior
• Variação da ação em porcentagem (double), ou seja, quanto a ação cresceu ou caiu
desde a abertura da bolsa no dia.*/

#include <stdio.h>

//Criação da struct pedida.
typedef struct bolsa{

  char nome[50];
  char atuacao[50];
  float valor_acao;
  float valor_anterior;
  double variacao;

} bolsa;

int main(){

  bolsa empresa;

  //Exemplo de leitura da struct.
  printf("Digite o nome da compahia: ");
  scanf("%s", empresa.nome);
  
  return 0;
}