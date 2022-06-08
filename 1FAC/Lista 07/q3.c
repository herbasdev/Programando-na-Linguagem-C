/* QUESTÃO 03: Faça um programa que leia
um número inteiro N e informe se o
mesmo é ou não primo.
Nota: um número é dito primo quando for
divisível apenas por 1 e por ele mesmo. */
#include <stdio.h>
void main()
{
  int i, n, primo = 0;

  printf("Insira um numero inteiro: ");
  scanf("%d", &n);

  for(i = 2; i <= n; i++)
  {
    if((n % i) == 0)
    primo++;
  }

  if (primo == 1)
  {
    printf("%d eh um numero primo", n);
  }
  else
  {
    printf("%d nao eh um numero primo", n);
  }
}