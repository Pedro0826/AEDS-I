/*Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa.
Para isto, mandou digitar uma linha para cada mercadoria com o preço de compra e de venda
de cada uma. A última linha contém preço de compra igual a 0. Escreva um programa que:

 a) Determine e escreva quantas mercadorias proporcionaram:
i) Lucro < 10%
ii) 10% <= lucro <= 20%
iii) Lucro > 20%
 b) Determine e escreva o valor total de compra e de venda de todas as mercadorias,
assim como o lucro total.*/

#include <stdio.h>

int main (){

    //Dominar as variaveis.
  float compra = 1, totcompra = 0, venda, totvenda = 0, lucro, lucrotot, m_10 = 0, ent_10 = 0, mai_20 = 0;

    //Fiz um do-while para aa repeticao.
  do{

    //Pedindo para entrar com o preco de compra e venda.
    printf("Digite o preco da compra (Digite 0 para finalizar.) \n");
    scanf("%f", &compra);
    
    if (compra > 0){
    printf("Digite o valor da venda: \n");
    scanf("%f", &venda);
    
    //Calculos
    totcompra = totcompra + compra;
    totvenda = totvenda + venda;
    lucro = (venda / compra) * 100;
    
    //Encrementaar as variaveis dos lucros.
    if (lucro < 110)
      m_10++;

    else if (lucro == 110 || lucro <= 120)
      ent_10++;

    else if (lucro > 120)
      mai_20++;

  } 
    
  } while (compra > 0);

    //Conta para o lucro total.
    lucrotot = totvenda - totcompra;
  
  //Mostrar na tela.
  printf("As mercadorias com cada porcentagem sera:\n\nMenor do que 10%%: %.0f\nEntre 10%% e 20%%: %.0f\nMaior do que 20%%: %.0f\n\nTotal de compra: %.2f\nTotal de venda: %.2f\nLucro total: %.2f", m_10, ent_10, mai_20, totcompra, totvenda, lucrotot);
    
  return 0;  
}