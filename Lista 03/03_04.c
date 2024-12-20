/*Escreva um procedimento que recebe 3 valores reais X, Y e Z e que verifique se esses
  valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o
  tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a
  seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor
  do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o
  tipo de triângulo formado observando as seguintes definições:
  
  - Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
  - Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais.
  - Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
  
  Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e
  para cada triângulo, acione o procedimento.*/

#include <stdio.h>

//Criacao da funcao.
void qtriangulo(){

  //Variaveis.
  float x, y, z;
  int n;

  //Sistema com do while para repeticao.
do{

  //Coleta dos lados do triangulo.
  printf("Digite o valor dos lados de um triangulo (Ex: 1.0 2.4 3.6): ");
  scanf("%f %f %f", &x, &y, &z);

  // If para ver se satisfaz a propriedade de ser um triangulo.
  if (x < (y + z) || y < (x + z) || z < ( y + x)) {

    //ifs para ver qual triangulo é, e mostrar na tela.
    if (x == y && y == z)
      printf ("E um tringulo equilatero!!\n");

    else if (x == y || y == z || z == x)
      printf ("E um triagulo isosceles!!\n");

    else if (x != y && y != z)
      printf ("E um triangulo escaleno!!\n");

    //Pergunta para ver se usuario quer colocar mais um triangulo.
    printf("Digite 0 para parar ou 1 para colocar outro triangulo: ");
    scanf ("%d", &n);
    
    }
    
  } while (n == 1);
}

int main(void) {
  
  //Usando a função no main.
  qtriangulo();
    
  return 0;
}
