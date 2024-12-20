/*Construa um programa que leia duas strings do teclado. Imprima uma mensagem infor-
mando se a segunda string lida está contida dentro da primeira.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  //Delcarando as variaveis.
  char str1[30], str2[30];
  int qstr1, qstr2, i = 0, j = 0, cont = 0;

  //Lendo as 2 strings
  printf("Digite a primeira string: ");
  scanf("%s", str1);
  printf("Digite a segunda string: ");
  scanf("%s", str2);

  //Calculando a quantidade de caracteres de cada string.
  qstr1 = strlen(str1);
  qstr2 = strlen(str2);

  //Calculo para ver se a 2 string esta contida na primeira.
  while(j < qstr1){
    if(str1[j] != str2[i]){
      j++;
    } else {
      j++;
      i++;
      cont++;
    }
  }

  //Mostrar na tela se a 2 string está contida ou não.
  if(cont == qstr2)
    printf("A segunda string esta contida na primeira!!!");
    else
    printf("A segunda string nao esta contida na primeira!!!");

  
  return 0;
}