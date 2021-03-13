#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
int main(void)
{
  int i;

  printf("Gerando 10 valores aleatorios:\n\n");

  srand(time(NULL));
  int teste = rand();
  printf("\n%d\n ", rand() %6);

  for (i=0; i < 10; i++)
  {


  }

  getch();
  return 0;

}
