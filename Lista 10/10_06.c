/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
• (a) Permita ao usuário entrar com os dados de 5 alunos.
• (b) Encontre o aluno com maior nota da primeira prova.
• (c) Encontre o aluno com maior média geral.
• (d) Encontre o aluno com menor média geral.
• (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6
para aprovação.*/

#include <stdio.h>

//Criação da struct.
typedef struct aluno{

int matricula;
char nome[30];
float nota1, nota2, nota3;
} aluno;

//Questao A
void questaoa(aluno alunos[5]){

  //for para percorrer entre os alunos.
  for(int i = 0; i < 5; i++){
    printf("Digite a matricula: ");
    scanf("%d", &alunos[i].matricula);
    printf("Digite o nome do aluno: ");
    scanf("%s", alunos[i].nome);
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &alunos[i].nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &alunos[i].nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &alunos[i].nota3);
  }
}

void questaob(aluno alunos[5]){

  float maiornota = alunos[0].nota1; 

  //Logica para achar a maior nota
  for(int i = 0; i < 5; i++){
    
    if(alunos[i].nota1 > maiornota)
      maiornota = alunos[i].nota1;
  }
  //For para comprar e mostrar qual aluno tem a maior nota.
  for(int i = 0; i < 5; i++){
    if(maiornota == alunos[i].nota1)
      printf("A maior nota é: %.2f, e e da matricula %d!!\n", maiornota, alunos[i].matricula);
  }
}

void questaoc(aluno alunos[5]){
  
  float media, mediaaux;
  media = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3;

  //Logica para achar a maior media geral.
  for(int i = 0; i < 5; i++){

    mediaaux = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    
    if(mediaaux > media)
      media = mediaaux;
  }
  //For para comparar e mostrar qual aluno tem a maior media.
  for(int i = 0; i < 5; i++){
    if(media == (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3)
      printf("A maior media geral é: %.2f, e e da matricula %d!!\n", media, alunos[i].matricula);
  }
}

void questaod(aluno alunos[5]){
  float media, mediaaux;
  media = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3;

  //for para achar a menor media.
  for(int i = 0; i < 5; i++){

    mediaaux = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

    if(mediaaux < media)
      media = mediaaux;
  }
  //For para comparar e mostrar qual aluno tem a menor media.
  for(int i = 0; i < 5; i++){
    if(media == (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3)
      printf("A menor media geral é: %.2f, e e da matricula %d!!\n", media, alunos[i].matricula);
  }
}

void questaoe(aluno alunos[5]){
  float media;

  //For para percorrer entre os alunos e ver quem passou.
  for(int i = 0; i < 5; i++){
    media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    if(media >= 6)
      printf("O aluno %d, foi aprovado!!!\n", alunos[i].matricula);
  }
}

int main(void) {

  aluno alunos [5];

  //Usando as funçoes criadas no main.
  questaoa(alunos);
  questaob(alunos);
  questaoc(alunos);
  questaod(alunos);
  questaoe(alunos);
  
  return 0;
}