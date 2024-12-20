/*Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria
desse nadador de acordo com a tabela abaixo.

Idade (anos) Categoria:
5 a 7=  F
8 a 10 = E
11 a 13 = D
14 a 15 = C
16 a 17 = B
Acima de 18 = A

Faça um programa que lê a idade de um nadador e imprime a categoria retornada pela
função.*/

#include <stdio.h>

//Criação da função.
char categoria (int idade){

  char categ;

  //Ifs para cada categoria.
  if (idade < 5)
 categ = '@';
    
  else if (idade >= 5 && idade <= 7)
 categ = 'F';

  else if (idade >= 8 && idade <= 10)
 categ = 'E';

  else if (idade >= 11 && idade <= 13)
 categ = 'D';

  else if (idade == 14 || idade == 15)
 categ = 'C';

  else if (idade == 16 || idade == 17)
 categ = 'B';

  else if (idade >= 18)
 categ = 'A';

return categ;
}

//Função principal.
int main(void) {
  char categ;
  int idade;

  //Ler a idade.
  printf("Digite a idade do(a) nadador(a): ");
  scanf("%d", &idade);

//Usar a função criada e mostrar na tela a categoria.
 categ = categoria(idade);
  printf("A categoria do nadador e: %c", categ);

  return 0;
}