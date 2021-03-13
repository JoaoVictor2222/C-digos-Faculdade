#include<stdio.h>


void main(void) {

  int hora = 0, minuto = 0, segundo = 0;

  while (hora != 24) {
    if (hora < 10) {
      printf("0%d:", hora);
    } else {
      printf("%d:", hora);
    }

    if (minuto < 10) {
      printf("0%d:", minuto);
    } else {
      printf("%d:", minuto);
    }
    if (segundo < 10) {
      printf("0%d", segundo);
    } else {
      printf("%d", segundo);
    }

    printf("\n");
    system("cls");

    if (segundo != 60) {
      segundo++;
    }
    if (segundo == 60) {
      segundo = 0;
      minuto++;
    }
    if (minuto == 60) {
      minuto = 0;
      hora++;
    }

  }
    printf("00:00:00");
}
