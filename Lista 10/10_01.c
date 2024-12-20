/*Crie um programa que permita armazenar o nome, a altura e da data de nascimento de até 10 pessoas. Cada pessoa deve ser representada por uma struct dentro de um vetor. A data de nascimento também deve ser uma struct. O nome e a altura de cada pessoa devem ser informados pelo teclado. A geração da data de nascimento deve ser feita aleatoriamente através de uma função.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

//Criação da struct para a data de nascimento da pessoa.
typedef struct nascimento{
  int dia;
  int mes;
  int ano;
} nascimento;

//Criação da struc para os dados da pessoa.
typedef struct pessoa{
 char nome[50];
 float altura;
 nascimento nasc;
} pessoa;

//Criação da função de gerar data.
nascimento gerardata(){

  nascimento data;

  data.dia = rand()%28+1;
  data.mes = rand()%12+1;
  data.ano = rand()%2024+1;

  return data;
}

int main(void) {

  srand(time(NULL));

  //Criando um vetor para 10 pessoas.
  pessoa p[10];

  //For para rondagem das pessoas e ler os seus dados.
  for(int i = 0; i < 10; i++){
    printf("Digite o nome da pessoa: ");
    scanf("%s", p[i].nome);
    printf("Digite a altura da pessoa: ");
    scanf("%f", &p[i].altura);

    //Usando a função para gerar a data.
    p[i].nasc = gerardata();
  }
  return 0;
}