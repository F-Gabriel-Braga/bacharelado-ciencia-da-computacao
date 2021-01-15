#ifndef __Lista__h
#define __Lista__h

    struct no {
        int valor;
        struct no *anterior;
        struct no *proximo;
    };
    typedef struct no No;
    
    struct lista {
        No *primeiro; 
        No *ultimo;
    };
    typedef struct lista Lista;

    Lista* criar();

    void esvaziar(Lista *l);

    void exibir(Lista *l);

    int primeiro(Lista *l);

    int maior(Lista *l);

    void insere_posicao(Lista *l, int x, int posicao);

    int comprimento(Lista* l);

    int maiores(Lista *l, int x);

    int ultimo(Lista *l);

    void retira_n(Lista* l, int x);

    void insere(Lista* l, int x);

#endif