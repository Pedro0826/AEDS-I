/*Faça um procedimento que recebe a média final de um aluno, identifica e exibe o seu
conceito, conforme a tabela abaixo. Faça um programa que leia a média de N alunos,
acionando o procedimento para cada um deles. (N deve ser lido do teclado)*/

#include <stdio.h>

//Criacao da funcao.
void conceito (){

  //Variaveis
int n, media;
  
  //Leitura de N
  printf ("Quantos alunos que vao querer saber o conceito?:");
  scanf("%d", &n);

  //For para repeticao.
  for (int i = 0; i < n; i++){

    //Leitura da media.
    printf("Digite a media do aluno: ");
    scanf("%d", &media);

    //If para cada media e sua nota.
    if (media <= 39)
      printf ("Conceito F\n");
    
    else if (media == 40 || media < 59)
      printf ("Conceito E\n");
    
    else if (media == 60 || media < 69)
      printf ("Conceito D\n");
    
    else if (media == 70 || media < 79)
      printf ("Conceito C\n");
    
    else if (media == 80 || media < 89)
      printf ("Conceito B\n");
    
    else if (media >= 90)
      printf ("Conceito A\n");
  }
        
}

//Funcao principal.
int main(void) {

  //Uso da funcao criada.
  conceito();
  
  return 0;
}