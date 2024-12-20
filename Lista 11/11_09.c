#include <stdio.h>
#include <stdlib.h>

int main(void) {

  const char *arquivo = "alunos.txt";
      int menu;

      do {
          printf("\nEscolha uma opcao:\n");
          printf("1. Adicionar dados de aluno\n");
          printf("2. Ler dados de alunos\n");
          printf("3. Sair\n");
          printf("Opcao: ");
          scanf("%d", &menu);

          if (menu == 1) {
              FILE *file = fopen(arquivo, "a");
              if (file == NULL) {
                  return 1;
              }

              int matricula;
              char telefone[100];
              char continuar;

              do {
                  printf("Digite a matricula do aluno: ");
                  scanf("%d", &matricula);
                  printf("Digite o telefone do aluno: ");
                  scanf("%s", telefone);

                  fprintf(file, "%d %s\n", matricula, telefone);

                  printf("Deseja adicionar outro aluno? (s/n): ");
                  scanf(" %c", &continuar);
              } while (continuar == 's' || continuar == 'S');

              fclose(arquivo);
          } else if (menu == 2) {
              FILE *file = fopen(arquivo, "r");
              if (file == NULL)
                  return 1;

              int matricula;
              char telefone[100];

              printf("\nDados dos alunos:\n");
              while (fscanf(arquivo, "%d %s", &matricula, telefone) != EOF) {
                  printf("Matricula: %d, Telefone: %s\n", matricula, telefone);
              }

              fclose(arquivo);
          } else if (menu == 3) {
              printf("Voce saiu\n");
          } else {
              printf("Opcao invalida! Tente novamente.\n");
          }
      } while (menu != 3);

      return 0;
  }