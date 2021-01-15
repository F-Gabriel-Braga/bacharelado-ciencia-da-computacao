#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista* criar() {
    Lista* l = malloc(sizeof(Lista));
    l->primeiro = NULL;
    l->ultimo = NULL;
    return l;
}

void esvaziar(Lista *l) {
    for (No *no = l->primeiro; no != NULL; no = no->proximo) {
        No *aux = no->anterior;
        free(aux);
        if(no->proximo == NULL) {
            free(no);
        }

    }
}

void insere_posicao(Lista *l, int x, int posicao) {
    if(comprimento(l) >= posicao && posicao > 0) {
        No *nno = malloc(sizeof(No));
        nno->valor = x;
        int i = 0;
        for (No *no = l->primeiro; no != NULL; no = no->proximo) {
            i++;
            if(i == posicao) {
                nno->anterior = no->anterior;
                nno->proximo = no;
                no->anterior->proximo = nno;
                no->anterior = nno;
            }
        }
    }
    else {
        insere(l, x);
    }
}

void exibir(Lista *l) {
    for (No *no = l->primeiro; no != NULL; no = no->proximo) {
        printf("%d ", no->valor);
    }
}

int primeiro(Lista *l) {
    return (l->primeiro->valor);
}

int maior(Lista *l) {
    int m = l->primeiro->valor;
    for(No *no = l->primeiro->proximo; no != NULL; no = no->proximo) {
        if(m < no->valor) {
            m = no->valor;
        }
    } 
    return m;
}

// 1. Implemente uma função que tenha como valor de retorno o comprimento de uma lista encadeada,
// isto é, que calcule o número de nós de uma lista. Essa função deve obedecer ao protótipo:
int comprimento(Lista* l) {
    int c = 0;
    for(No *no = l->primeiro; no != NULL; no = no->proximo) {
        c++;
    } 
    return c;
}

// 2. Considerando listas encadeadas de valores inteiros, implemente uma função que retorne o número
// de nós da lista que possuem o campo info com valores maiores do que x. Essa função deve obedecer
// ao protótipo:
int maiores(Lista *l, int x) {
    int c = 0;
    for(No *no = l->primeiro; no != NULL; no = no->proximo) {
        if(no->valor > x) {
            c++;
        }
    } 
    return c;
}

// 3. Implemente uma função que retorne o último valor de uma lista encadeada de inteiros. Essa
// função deve obedecer ao protótipo:
int ultimo(Lista *l) {
    return (l->ultimo->valor);
}

// 4. Considerando listas de valores inteiros, implemente uma função que receba como parâmetros
// uma lista encadeada e um valor inteiro x, e retire da lista todas as ocorrências de x. Essa
// função deve obedecer ao protótipo:
void retira_n(Lista* l, int x) {
    for (No *no = l->primeiro; no != NULL; no = no->proximo) {
        if(no->valor == x) {
            no->anterior->proximo = no->proximo;
            no->proximo->anterior = no->anterior;
            free(no);
        }
    }
}

// 5. Considerando listas de valores inteiros, implemente uma função que receba como parâmetros uma
// lista encadeada e um valor inteiro x a ser inserido na lista. Essa função deve obedecer ao protótipo:
void insere(Lista* l, int x) {
    No *no = malloc(sizeof(No));
    no->valor = x;
    if(l->primeiro == NULL && l->ultimo == NULL) {
        no->anterior = NULL;
        no->proximo = NULL;
        l->primeiro = no;
        l->ultimo = no;
    }
    else {
        no->anterior = l->ultimo;
        no->proximo = NULL;
        l->ultimo->proximo = no;
        l->ultimo = no;
    }
}