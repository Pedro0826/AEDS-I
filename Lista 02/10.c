/*Em uma eleição presidencial existem quatro candidatos. Os votos são informados através
de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte
codificação:
1,2,3,4 = voto para os respectivos candidatos;
5 = voto nulo;
6 = voto em branco;
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco.
Como finalizador do conjunto de votos, tem-se o valor 0.*/

#include <stdio.h>

int main (){

  //Declaracao de variaveis.
int n, canda = 0, candb = 0, candc = 0, candd = 0, nulo = 0, branco = 0;

//Sistema com do, para repeticao e guardar a entrada.
 do{ 
  
  printf("Quem voce quer colocar seu voto?\n1,2,3,4 = voto para os respectivos candidatos\n5 = voto nulo\n6 = voto em branco\n(Digite 0 para finalizar)\n");
  scanf("%d", &n);

  if (n == 1)
    canda++;
   
  else if (n == 2)
    candb++;
   
  else if (n == 3)
    candc++;
   
  else if (n == 4)
    candd++;
   
  else if (n == 5)
    nulo++;
   
  else if (n == 6)
    branco++;
    
 } while (n > 0);

//Mostrar o resultado na tela
printf("O numeros de votos para cada canditato e:\nCandidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nCandidato 4: %d\nNulo: %d\nBranco: %d\n", canda, candb, candc, candd, nulo, branco);

  return 0;
}