/*Em uma cidade, sabe-se hipoteticamente que, em janeiro de 2021, não ocorreu temperatura inferior a 15°C, nem superior a 40°C. Faça um programa que armazene as temperaturas de cada dia de janeiro em um vetor (de 31 posições), calcule e imprima:
• A menor e a maior temperatura ocorrida;
• A temperatura média;
• O número de dias nos quais a temperatura foi inferior à temperatura média.*/

#include <stdio.h>


int main(void) {

  //Declaração das Variaveis
  float janeiro[31],dias = 0;
  float temp, total = 0.0, maior = 15, menor = 40;
  
  for(int i = 0; i < 31; i++){
    //Leitura da Temperatura.
    printf("Digite a temperatura do %d° dia: ", i+1);
    scanf("%f", &janeiro[i]);
    
    total = total + janeiro[i];

    //Ifs para ver a maior e a menor temperatura.
    if(janeiro[i] < menor){
      menor = janeiro[i];
    }
    else if(janeiro[i] > maior){
      maior = janeiro[i];
    }
  }


  //For e if para ver os dias que tiveram a temepratura menor que a media.
  for(int i = 0; i < 31; i++){
    if(janeiro[i] < total/31){
      dias++;
    }
  }

  //Mostrando na tela os resultados.
  printf("A menor e a maior temperatura ocorrida foi: %.2fº, %2.fº\n", menor, maior);
  printf("A temperatura média e: %.2fº\n", total/31);
  printf("O número de dias nos quais a temperatura foi inferior à temperatura média foi: %0.f\n", dias);
  
  return 0;
}
