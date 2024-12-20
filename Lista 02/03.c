/*Faça um programa que receba dez números e verifique se eles são divisíveis por 3 e 9 (ao
mesmo tempo), por 2 e por 5. Caso algum número não seja divisível por nenhum desses
números mostre a mensagem “Número não é divisível pelos valores”. Apresente também ao
final a quantidade de números divisíveis por 3 e 9, por 2 e por 5.*/

#include <stdio.h>

int main (){

  int n = 1, tres = 0, dois = 0, cinco = 0; //Variaveis

    // Salvar valor para as variaveis e repetição do comando.
    for (int i = 1; i <= 10; i++){
      printf ("Digite um numero: ");
      scanf ("%d", &n);

        if (n % 3 == 0 && n % 9 == 0)
          ++tres;
        
        if (n % 2 == 0)
          ++dois;
              
        if (n % 5 == 0)
          ++cinco;
          
        if ((n % 3 != 0 && n % 9 != 0) && (n % 2 != 0) && (n % 5 != 0))
          printf("Número não é divisível pelos valores\n");
        
    }

    // Mostrar na tela o resultado.
  printf ("Existe:\n%d numero(s) divisivel(s) por 3 e 9\n%d numero(s) divisivel(s) por 2\n%d numero(s) divisivel(s) por 5", tres, dois, cinco);
  

    return 0;
}
