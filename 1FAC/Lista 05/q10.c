/* QUESTÃO 10:
Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de altura e gênero das pessoas. Faça um programa que leia as informações de 50 pessoas e informe:
− a maior e a menor alturas encontradas;
− a média de altura das mulheres;
− a média de altura da população;
− o percentual de homens na população. */
#include <stdio.h>
void main()
{
  int i, totalHomem = 0, totalMulher = 0;
  float altura, menorAltura = 999, maiorAltura = 0, somaHomem = 0, somaMulher = 0, mediaHomem, mediaMulher, percentualHomem;
  char genero;

  for(i = 1; i <= 50; i++)
  {
    printf("\nH ou M?\n");
    fflush(stdin);
    scanf("%c", &genero);
    printf("\nDigite a altura:\n");
    scanf("%f", &altura);
    
    if (altura > maiorAltura) {
      maiorAltura = altura; }

    if (altura < menorAltura) {
      menorAltura = altura; }

    if ((genero == 'H') || (genero == 'h'))
    {
      totalHomem++;
      somaHomem = (somaHomem + altura);
    }

    if ((genero == 'M') || (genero == 'm'))
    {
      totalMulher++;
      somaMulher = (somaMulher + altura);
    }
  }

  mediaMulher = (somaMulher / totalMulher);
  mediaHomem = (somaHomem / totalHomem);

  percentualHomem = ((totalHomem / 50) * 100.0);

  printf("\nMaior altura encontrada: %.2f", maiorAltura);
  printf("\nMenor altura encontrada: %.2f", menorAltura);
  printf("\nMedia de altura das mulheres: %.2f", mediaMulher);
  printf("\nMedia de altura dos homens: %.2f", mediaHomem);
  printf("\nPercentual de homens na populacao: %.2f", percentualHomem);
}