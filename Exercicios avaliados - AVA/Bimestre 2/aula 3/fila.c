#include <stdio.h>
#include<stdlib.h>
#define MAX 50

void inserir();
void deletar();
void mostrar();
int vetFila[MAX];
int atras = -1;
int frente = -1;
int main() {
  int escolha;
  while (1) {
    printf("\n1.Inserir um elemento na fila \n");
    printf("2.Deletar um elemento da fila \n");
    printf("3.Mostrar todos os elementos da fila \n");
    printf("4.Sair \n");
    printf("Escolha uma opcao : ");
    scanf("%d", & escolha);
    switch (escolha) {
    case 1:
      inserir();
      break;
    case 2:
      deletar();
      break;
    case 3:
      mostrar();
      break;
    case 4:
      exit(1);
    default:
      printf("Opcao nao existente \n");
    }
  }
}
void inserir() {
  int item;
  if (atras == MAX - 1)
    printf("Fila lotada \n");
  else {
    if (frente == -1)
      frente = 0;
    printf("Insira o elemento na fila: ");
    scanf("%d", & item);
    atras = atras + 1;
    vetFila[atras] = item;
  }
}
void deletar() {
  if (frente == -1 || frente > atras) {
    printf("Fila lotada \n");
    return;
  } else {
    printf("Elemento deletado da fila eh: %d\n", vetFila[frente]);
    frente = frente + 1;
  }
}
void mostrar() {
  int i;
  if (frente == -1)
    printf("Fila esta vazia\n");
  else {
    printf("Fila : \n");
    for (i = frente; i <= atras; i++)
      printf("%d ", vetFila[i]);
    printf("\n");
  }
}
