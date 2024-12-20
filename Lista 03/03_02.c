/*A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados
sobre o salário e número de filhos. Faça um procedimento que leia esses dados para um
número não determinado de pessoas, calcule e exiba a média de salário da população (a
condição de parada pode ser um flag ou a quantidade N). Faça um programa que acione o
procedimento.*/

#include <stdio.h>

//Criação da função.
void mediasalario (){
  
  // Declaração das variaveis.
  float sal = 1, totalsal = 0, msal, qpessoa, filho; 

  //Sistema de repetição para guardar as entradas.
  while (sal >= 0){

   printf ("Digite o seu salario: (Se digitar um salario negativo ira parar a leitura.) \n");
   scanf("%f", &sal);

    if (sal >= 0){

    totalsal = totalsal + sal;

      printf ("Digite a quantidade de filhos que voce tem: ");
      scanf ("%f", &filho);

    qpessoa++;
    } 

    if (sal < 0){
      printf("Fim da leitura!!!\n");
  }   
  }    

  //Calculo para a media.
  msal = totalsal / qpessoa;


  //Saida de informacoes.    
  printf("A media do salario da populacao e: %.2f", msal); 
}


//Usando a função.
int main(void) {

 mediasalario();
  
  return 0;
}