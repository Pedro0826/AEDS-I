/*Faça um programa que armazene em um registro de dados (estrutura composta) os dados
  de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data
  de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até
  30 caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na
  estrutura e exibidos na tela.*/

#include <stdio.h>

//Criação da struct
typedef struct funcionario{
  char nome[30], sexo[2], nasc[11], cargo[30];
  int idade, cpf, setor;
} funcionario;

int main(void) {

  funcionario pessoa;

  //Lendo todos os dados da pessoa.
  printf("Digite o nome: ");
  scanf("%s", pessoa.nome);
  printf("\nDigite a idade: ");
  scanf("%d", &pessoa.idade);
  printf("\nDigite a Sexo (M ou F): ");
  scanf("%s", pessoa.sexo);
  printf("\nDigite o CPF: ");
  scanf("%d", &pessoa.cpf);
  printf("\nDigite a data de nascimento (formato xx/xx/xxxx): ");
  scanf("%s", pessoa.nasc);
  printf("\nDigite o setor: ");
  scanf("%d", &pessoa.setor);
  printf("\nDigite o cargo: ");
  scanf("%s", pessoa.cargo);

  //Mostrando todos os resultados.
  printf("Os dados da pessoa sao:\nNome: %s\nIdade: %d\nSexo: %s\nCPF: %d\nData de Nascimento: %s\nSetor: %d\nCargo: %s", pessoa.nome, pessoa.idade, pessoa.sexo, pessoa.cpf, pessoa.nasc, pessoa.setor, pessoa.cargo);
  
  return 0;
}