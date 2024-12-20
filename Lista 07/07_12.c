/*Elabore uma função que receba duas strings como parâmetros e verifique se a segunda
  string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres
  das strings.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Criação da função.
int incluido (char *str1Ptr, char *str2Ptr){

int cont = 0;

// Calculo para ver se a quantidades de vezes que a str2 esta contida.
while (*str1Ptr != '\0') {
  // Calcula para ver se esta contido.
  if (*str1Ptr != *str2Ptr) {
    str1Ptr++;
  } else {
    str1Ptr++;
    str2Ptr++;
    cont++;
  }
}
  return cont;
}

int main(void) {

  // Delcarando as variaveis.
  char str1[30], str2[30];
  char *str1Ptr = str1, *str2Ptr = str2;
  int qstr1, qstr2, resultado;

  // Lendo as 2 strings
  printf("Digite a primeira string: ");
  scanf("%s", str1);
  printf("Digite a segunda string: ");
  scanf("%s", str2);

  qstr2 = strlen(str2);

  resultado = incluido(&str1[0], &str2[0]);
  
  //Mostrar na tela se a 2 string está contida ou não.
  if(resultado == qstr2)
    printf("A segunda string esta contida na primeira!!!");
    else
    printf("A segunda string nao esta contida na primeira!!!");


  return 0;
}