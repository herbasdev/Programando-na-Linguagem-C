/* QUESTÃO 5:
Implementar um programa que leia N valores reais positivos (caso o valor nao seja positivo, outro será lido). Ao final exibir:
a. o maior valor positivo fornecido;
b. a média de todos os valores informados*/
#include <stdio.h>
void main()
{
int i, n, valormin, valormax, valor;
float media, soma;
soma = 0;
printf("Quantidade: ");
scanf("%d", &n);

i = 0;
do
{
printf("Valor: ");
scanf("%d", &valor);
{
  if ((valor < 0) || (valor == 0))
  {
  printf("Valor invalido, digite outro numero\n");
  }
  else
  {
  valormin = valor;
  valormax = valor;
  }
}
}
while((valor < 0) || (valor == 0));

for(i = 1; i <= n-1; i++)
{
  printf("Valor: ");
  scanf("%d", &valor);

if ((valor < 0) || (valor == 0))
{
i = (i - 1);
printf("Valor invalido, digite outro numero\n");
}

else
{
soma = (soma + valor);
media = (soma / i);
if (valor > valormax)
{
  valormax = valor;
}
}
}
printf("\nValor max: %d", valormax);
printf("\nMedia: %.2f", media);
}