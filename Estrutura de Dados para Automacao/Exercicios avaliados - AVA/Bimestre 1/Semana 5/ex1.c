#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
  float *v;
  int i, n;

  printf("Informe o numero de componentes do vetor\n");
  scanf("%d", &n);

  v = (float *) malloc(n * sizeof(float));


  for (i = 0; i < n; i++)
  {
    printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
    scanf("%f",&v[i]);
  }


  printf("\n*********** Valores do vetor dinamico ************\n\n");
  float soma=0;
  for (i = 0;i < n; i++)
  {
    soma=soma+v[i];
  }
  float media = soma/n;
  printf("Media: %f",media);

  free(v);

  getch();
  return 0;
}
