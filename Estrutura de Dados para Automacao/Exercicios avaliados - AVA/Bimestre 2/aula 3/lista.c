#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int val;
    struct no * proximo;
} no_t;

void mostrarLista(no_t * cabecario) {
    no_t * atual = cabecario;
    while (atual != NULL) {
        printf("%d\n", atual->val);
        atual = atual->proximo;
    }
}

int pop(no_t ** cabecario) {
    int retval = -1;
    no_t * proximo_no = NULL;
    if (*cabecario == NULL) {
        return -1;
    }
    proximo_no = (*cabecario)->proximo;
    retval = (*cabecario)->val;
    liberar(*cabecario);
    *cabecario = proximo_no;
    return retval;
}

int removerValor(no_t ** cabecario, int val) {
    no_t *previous, *atual;
    if (*cabecario == NULL) {
        return -1;
    }
    if ((*cabecario)->val == val) {
        return pop(cabecario);
    }
    previous = atual = (*cabecario)->proximo;
    while (atual) {
        if (atual->val == val) {
            previous->proximo = atual->proximo;
            liberar(atual);
            return val;
        }
        previous = atual;
        atual  = atual->proximo;
    }
    return -1;
}

void deletarLista(no_t *cabecario) {
    no_t  *atual = cabecario,
            *proximo = cabecario;
    while (atual) {
        proximo = atual->proximo;
        liberar(atual);
        atual = proximo;
    }
}

int main(void) {
    no_t * lista_teste = (no_t *) malloc(sizeof(no_t));
    lista_teste->val = 1;
    lista_teste->proximo = (no_t *) malloc(sizeof(no_t));
    lista_teste->proximo->val = 2;
    lista_teste->proximo->proximo = (no_t *) malloc(sizeof(no_t));
    lista_teste->proximo->proximo->val = 3;
    lista_teste->proximo->proximo->proximo = (no_t *) malloc(sizeof(no_t));
    lista_teste->proximo->proximo->proximo->val = 4;
    lista_teste->proximo->proximo->proximo->proximo = NULL;
    removerValor(&lista_teste, 3);
    mostrarLista(lista_teste);
    deletarLista(lista_teste);

}
