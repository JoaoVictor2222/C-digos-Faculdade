#include <stdio.h>

int TAM = 5;

int ler(int vet[]) {
  printf("Leitura:\n");
  for (int i = 0; i < TAM; ++i) {
    printf("%d\n", vet[i]);
  }
}
int maior(int vet[]) {
  int maior = 0;
  for (int i = 0; i < TAM; ++i) {
    if (vet[i] > maior) {
      maior = vet[i];
    }
  }
  printf("Maior:%d", maior);
}
int media(int vet[]) {
  float soma = 0;
  for (int i = 0; i < TAM; ++i) {
    soma = vet[i] + soma;
  }
  float media = soma / TAM;
  printf("\nMedia:%f", media);
}
int troca(int vet[], int x, int y) {
  for (int i = 0; i < TAM; i++) {
    if (vet[i] == x) {
      vet[i] = y;
    } else {

      if (vet[i] == y) {
        vet[i] = x;
      }
    }
  }
  for (int i = 0; i < TAM; i++) {
    printf("%d\n", vet[i]);
  }
}

void main(void) {

  int vet[] = {2,5,17,8,10};
  ler(vet[TAM]);
  maior(vet[TAM]);
  media(vet[TAM]);
  int x, y;
  printf("\nDigite valor de X: ");
  scanf("%d", & x);
  printf("\nDigite valor de Y: ");
  scanf("%d", & y);
  troca(vet[5], x, y);
}
