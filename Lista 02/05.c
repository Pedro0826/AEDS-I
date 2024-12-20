/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o
  salário e número de filhos de cada habitante. A prefeitura deseja saber:
  a) média do salário da população;
  b) média do número de filhos;
  c) maior salário;
  d) percentual de pessoas com salário até R$100,00.
  O final da leitura de dados se dará com a entrada de um salário negativo*/


#include <stdio.h>

int main(void) {

  // Declaração das variaveis.
  float sal = 1, msal, totalsal = 0, maiorsal, qpessoa, filho, mfilho, totalfilho = 0, sal_100, psal_100 = 0; 
  
  //Sistema de repetição para guardar as entradas.
  while (sal >= 0){
    
   printf ("Digite o seu salario: (Se digitar um salario negativo ira parar a leitura.) \n");
   scanf("%f", &sal);
    
    if (sal >= 0){
      
    totalsal = totalsal + sal;
      
      printf ("Digite a quantidade de filhos que voce tem: ");
      scanf ("%f", &filho);

    totalfilho = totalfilho + filho;

    qpessoa++;
    } 

    if (sal >= 0 && sal <= 100){
      sal_100++;
   } 

    if (maiorsal < sal){
      maiorsal = sal;
    }
      
    if (sal < 0){
      printf("Fim da leitura!!!\n");
  }   
  }    

  //Calculo para as medias.
  msal = totalsal / qpessoa;
  mfilho = totalfilho / qpessoa;
  psal_100 = ( sal_100 / qpessoa ) * 100;

  //Saida de informacoes.    
  printf("A media do salario da população e: %.2f\nA media do numero de filhos e: %.2f", msal, mfilho); 
  printf("O maior salario e: %.2f\nO percentual de pessoas com salario ate 100 reais e: %.2f%%", maiorsal, psal_100);
  
  
  return 0;
}