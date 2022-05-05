/* QUESTÃO 02: Escrever um algoritmo que obtenha o peso de uma pessoa na Terra e o número de um planeta. Ao final, com auxílio da tabela abaixo, calcular o peso desta pessoa no planeta escolhido.
Número |Planeta  | Gravidade Relativa g
1      |Mercúrio |0,37
2      |Vênus    |0,88
3      |Marte    |0,38
4      |Júpiter  |2,64
5      |Saturno  |1,15
6      |Urano   |1,17 

Para calcular o peso no planeta escolhido, utilize a seguinte fórmula:
pesoPlaneta = (pesoTerra/10) * gravidadePlaneta    */

#include <stdio.h>
void main ()
{
//variaveis
  float pesoPlaneta, pesoTerra, gravidadePlaneta;
  int escolha;

//scans
  printf("Digite seu peso:\n");
  scanf("%f", &pesoTerra);

  printf("Escolha o planeta:\n 1 - Mercurio \n 2 - Venus \n 3 - Marte \n 4 - Jupiter \n 5 - Saturno \n 6 - Urano \n");
  scanf("%d", &escolha);

//calculos
  if (escolha == 1)
  {
    (gravidadePlaneta = 0.37);
  }
  else
  
  if (escolha == 2)
  {
    (gravidadePlaneta = 0.88);
  }
  else

  if (escolha == 3)
  {
    (gravidadePlaneta = 0.38);
  }
   else
  
  if (escolha == 4)
  {
    (gravidadePlaneta = 2.64);
  }
  else

  if (escolha == 5)
  {
    (gravidadePlaneta = 1.15);
  }
 else

  if (escolha == 6)
  {
    (gravidadePlaneta = 1.17);
  }
  
  pesoPlaneta = ((pesoTerra / 10) * gravidadePlaneta);

//resultado
  printf("Seu peso no planeta escolhido eh: %.2f", pesoPlaneta);
}