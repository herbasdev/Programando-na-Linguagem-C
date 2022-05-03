/* QUESTÃO 06:
Fazer um algoritmo que determine a ordem de uma data (dia e mês) no ano.
Exemplos:
01/01 - 1o dia do ano
03/02 - 34o dia do ano */

#include <stdio.h>
void main()
{
//variaveis
int mes, dia, resultado;

//scans
printf("Qual a data de hoje? (dia, mes)\n");
scanf("%d, %d", &dia, &mes);

//calculo
if (mes == 1)
{
printf("%do dia do ano", dia);
}
else
{
  if (mes == 2)
  {
  resultado = (31 + dia);
  }
  else
  {
    if (mes == 3)
    {
      resultado = (59 + dia);
    }
    else
    {
      if (mes == 4)
      {
        resultado = (90 + dia);
      }
    else
    {
      if (mes == 5)
      {
        resultado = (120 + dia);
      }
    else
    {
      if (mes == 6)
      {
        resultado = (151 + dia);
      }
    else
    {
      if (mes == 7)
      {
        resultado = (181 + dia);
      }
    else
    {
      if (mes == 8)
      {
        resultado = (212 + dia);
      }
    else
    {
      if (mes == 9)
      {
        resultado = (243 + dia);
      }
    else
    {
      if (mes == 10)
      {
        resultado = (273 + dia);
      }
    else
    {
      if (mes == 11)
      {
        resultado = (304 + dia);
      }
    else
    {
      if (mes == 12)
      {
        resultado = (334 + dia);
      }
    }
    }
    }
    }
    }
    }
    }
    }
    }
  }
  
//resultado
printf("%do dia do ano", resultado);
 }
}