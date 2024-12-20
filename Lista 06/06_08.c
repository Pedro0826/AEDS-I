/*Construa um programa que leia duas strings do teclado. Imprima uma mensagem
infor- mando quantas vezes a segunda string lida está contida dentro da
primeira.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  // Delcarando as variaveis.
  char str1[30], str2[30];
  int qstr1, qstr2, i = 0, j = 0, cont = 0;

  // Lendo as 2 strings
  printf("Digite a primeira string: ");
  scanf("%s", str1);
  printf("Digite a segunda string: ");
  scanf("%s", str2);

  // Calculando a quantidade de caracteres de cada string.
  qstr1 = strlen(str1);
  qstr2 = strlen(str2);

  // Calculo para ver se a quantidades de vezes que a str2 esta contida.
  while (str1[j] != '\0') {
    // Este if é para quando a str2 acabar, para voltar.
    if (str2[i] == '\0')
      i = 0;
    // Calcula para ver se esta contido.
    if (str1[j] != str2[i]) {
      j++;
    } else {
      j++;
      i++;
      cont++;
    }
  }

  // Mostrar na tela a quantidade de vezes que a str2 esta contida na primeira.
  cont = cont / qstr2;
  printf("A segunda string esta contida na primeira %d vezes!!!", cont);

  return 0;
}