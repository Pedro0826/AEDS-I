#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char *arquivo = "numeros.txt";
  
      FILE *file;
      float num;
      float max = 0;
      float min = 0;
      float sum = 0.0;
      int cont = 0;

      // Abre o arquivo para leitura
      file = fopen(arquivo, "r");
      if (file == NULL) {
          return 1;
      }

      // Lê os números do arquivo e calcula o máximo, mínimo e a soma
      while (fscanf(file, "%f", &num) != EOF) {
          if (num > max) {
              max = num;
          }
          if (num < min) {
              min = num;
          }
          sum += num;
          cont++;
      }

      // Fecha o arquivo
      fclose(file);

      // Calcula a média
      float average = (cont > 0) ? (sum / cont) : 0.0;

      // Imprime os resultados
      printf("Valor máximo: %.2f\n", max);
      printf("Valor mínimo: %.2f\n", min);
      printf("Média: %.2f\n", average);

      return 0;
  }
