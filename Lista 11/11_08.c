#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int total_veiculos;
  float valor_aluguel;

      // Solicita ao usuário o número de veículos e o valor do aluguel
      printf("Digite a quantidade de veículos: ");
      scanf("%d", &total_veiculos);
      printf("Digite o valor cobrado por cada aluguel: R$ ");
      scanf("%f", &valor_aluguel);

      // Cálculo do faturamento anual
      int veiculos_alugados_mes = total_veiculos / 3;
      float faturamento_mensal = veiculos_alugados_mes * valor_aluguel;
      float faturamento_anual = faturamento_mensal * 12;

      // Cálculo do valor ganho com multas
      int veiculos_atrasados_mes = veiculos_alugados_mes / 10;
      float valor_multas_mes = veiculos_atrasados_mes * valor_aluguel * 0.20;

      // Cálculo do valor gasto com manutenção anual
      int veiculos_manutencao_ano = total_veiculos * 0.02;
      float custo_manutencao_anual = veiculos_manutencao_ano * 600.0;

      // Impressão dos resultados na tela
      printf("Faturamento anual: R$ %.2f\n", faturamento_anual);
      printf("Valor ganho com multas no mês: R$ %.2f\n", valor_multas_mes);
      printf("Valor gasto com manutenção anual: R$ %.2f\n", custo_manutencao_anual);

      // Gravação dos resultados no arquivo resultado.txt
      FILE *arquivo = fopen("resultado.txt", "w");
      if (arquivo == NULL) 
          return 1;
    
      fprintf(arquivo, "Faturamento anual: R$ %.2f\n", faturamento_anual);
      fprintf(arquivo, "Valor ganho com multas no mês: R$ %.2f\n", valor_multas_mes);
      fprintf(arquivo, "Valor gasto com manutenção anual: R$ %.2f\n", custo_manutencao_anual);

      fclose(arquivo);

      return 0;
  }