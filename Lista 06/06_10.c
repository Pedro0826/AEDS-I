//Escreva um programa que leia duas strings e as imprima em ordem alfabética.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> //Para função to lower.

int main (){

  char palavra1[30], palavra2[30];
  int i = 0;

 //Lendo a primeira string.
  printf("Digite a primeira string: ");
  scanf("%s", palavra1);

//Lendo a segunda string.
  printf("Digite a segunda string: ");
  scanf("%s", palavra2);

  //For para deixar tudo minusculo para nao ter erro.
  for (int i = 0; palavra1[i] != '\0'; i++){
  palavra1 [i] = tolower(palavra1[i]);
  }
  
  for (int i = 0; palavra1[i] != '\0'; i++){
  palavra2 [i] = tolower(palavra2[i]);
  }

  //Do para repetição e mostrar em ordem alfabetica.
  do{
  if (palavra1[i] != palavra2[i]){
    if (palavra1[i] < palavra2[i]){
      printf("%s, %s", palavra1, palavra2);
    } else {
      printf("%s, %s", palavra2, palavra1);
    }
  }
  i++;
  } while(palavra1[i] == palavra2[i]);
    
  return 0;
}