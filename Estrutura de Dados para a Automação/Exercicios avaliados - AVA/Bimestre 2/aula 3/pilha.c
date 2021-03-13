#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Pilha {
    int topo;
    unsigned capacidade;
    int* vetor;
};

struct Pilha* criarPilha(unsigned capacidade)
{
    struct Pilha* Pilha = (struct Pilha*)malloc(sizeof(struct Pilha));
    Pilha->capacidade = capacidade;
    Pilha->topo = -1;
    Pilha->vetor = (int*)malloc(Pilha->capacidade * sizeof(int));
    return Pilha;
}


int estaCheia(struct Pilha* Pilha)
{
    return Pilha->topo == Pilha->capacidade - 1;
}

int estaVazia(struct Pilha* Pilha)
{
    return Pilha->topo == -1;
}

void push(struct Pilha* Pilha, int item)
{
    if (estaCheia(Pilha))
        return;
    Pilha->vetor[++Pilha->topo] = item;
    printf("%d push da Pilha\n", item);
}

int pop(struct Pilha* Pilha)
{
    if (estaVazia(Pilha))
        return INT_MIN;
    return Pilha->vetor[Pilha->topo--];
}

int peek(struct Pilha* Pilha)
{
    if (estaVazia(Pilha))
        return INT_MIN;
    return Pilha->vetor[Pilha->topo];
}

int main()
{
    struct Pilha* Pilha = criarPilha(100);

    push(Pilha, 10);
    push(Pilha, 20);
    push(Pilha, 30);

    printf("%d pop da Pilha\n", pop(Pilha));

    return 0;
}
