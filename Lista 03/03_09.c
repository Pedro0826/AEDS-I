/*Faça uma função que lê um número indeterminado de notas de alunos, calcula e retorna a
  média das notas dos alunos aprovados (nota maior ou igual a 6). Faça um programa que lê
  o número de alunos e imprime a média retornada pela função.*/

#include <stdio.h>

//Criação da função.
float media_aluno (){

  //Variaveis.
  int cont = 1;
  float nota, nalunos = 0, notatotal = 0, medianota;

  //While para repeticao.
  while (cont == 1){
    //Ler a nota do aluno.
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    //If para saber se o aluno foi aprovado e continuar a função.
    if (nota >= 6){
      notatotal = notatotal + nota;
      nalunos++;
    } 

    //Método para continuar ou parar o loop.
    printf("Digite 1 para continuar ou 0 para parar: ");
    scanf("%d", &cont);
    }

  //Formula para media.
  medianota = notatotal / nalunos;

  return medianota;
  
}//Função principal.
int main(void) {

  float media;

  //Usando A função.
  media = media_aluno ();
  printf("A media de nota dos aprovados e: %.2f", media);
  
  return 0;
}