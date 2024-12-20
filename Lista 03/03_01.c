/*Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a
letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se for
‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3
notas de N alunos e acione o procedimento para cada aluno. (N deve ser lido do teclado)*/

#include <stdio.h>

//Criação da função.
void mediaaluno (float provaa, float provab, float provac, char media){

  float mediaa, mediap;
  
  //If para fazer a conta dependendo da media.
  if (media == 'A' || media == 'a'){
    mediaa = (provaa + provab+ provac) / 3;
    printf("A media aritimetica das notas do aluno e: %.2f\n", mediaa);
  }

  else if (media == 'P' || media == 'p'){
    mediap = ((provaa * 5) + (provab * 3) + (provac * 2)) / 10;
    printf("A media ponderada das notas do aluno e: %.2f\n", mediap);
  }
  else{
    printf ("ERRO!!");
  }
  
}

int main(void) {

  int N;

  //Ler quantidade de alunos.
  printf("Digite a quantidade de alunos: ");
  scanf("%d", &N);

  //For para repeticão.
  for (int i = 0; i< N; i++) {

    float provaa, provab, provac;
    char media;

    printf("\nDigite as notas do aluno %d (separadas por espaco): ", i + 1);
    scanf("%f %f %f", &provaa, &provab, &provac);

    printf("Digite 'A' para media aritmetica ou 'P' para media ponderada: ");
    scanf(" %c", &media);

   mediaaluno (provaa, provab, provac, media);
  }
  
  
  return 0;
}
