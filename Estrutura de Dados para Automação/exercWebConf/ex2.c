#include <stdio.h>

void main(void)
{
   int i, j, v1[10][10], v2[10][10], s[10][10];
   int soma =0;

   printf("Primeira Matriz: \n");

   for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++)
         scanf("%d", &v1[i][j]);

   printf("Segunda matriz: \n");

   for (i = 0; i< 3; i++)
      for (j = 0 ; j < 3; j++)
            scanf("%d", &v2[i][j]);


   for (i = 0; i < 3; i++) {
      for (j = 0 ; j < 3; j++) {
         s[i][j] = v1[i][j] + v2[i][j];
         soma = soma + s[i][j];

      }
   }
printf("\nSoma: %d \n", soma);

int d1,d2;
    d1=v1[0][0]+v1[1][1]+v1[2][2];
    d2=v2[2][0]+v2[1][1]+v2[0][2];
int soma2 = d1+d2;
printf("Soma das diagonais:%d",soma2);

}
