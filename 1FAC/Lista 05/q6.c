/* QUESTÃO 06:
Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,8,64,1024,... */
#include <stdio.h>
void main()
{
  //variaveis
  int n, multiplicador = 1, resultado = 1, i;
  //scans
  printf("Insira o valor de N: ");
  scanf("%d", &n);
  //calculos
  if (n <= 0)
  {
    printf("Valor invalido, insira um valor positivo e diferente de 0");
  }

  else
  {
    if (n == 1)
    {
      printf("\n%do termo da serie: %d", n, resultado);
    }

    else
    {
      for(i = 2; i <= n; i++)
        {
          multiplicador = (multiplicador * 2);
          //printf("\nmultiplicador: %d", multiplicador);
          resultado = (resultado * multiplicador);
          //printf("\nresultado: %d", resultado);
        }
      //resultado
      printf("\n%do termo da serie: %d", n, resultado);
    }
  }
}