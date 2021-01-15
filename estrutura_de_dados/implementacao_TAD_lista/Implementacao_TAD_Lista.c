
/*
* Inicialmente, cria as estruturas de dados para manipulação da Lista Encadeada nos arquivos lista.h e lista.c.
* Você tem liberdade para escolher o tipo de lista (simples ou duplamente encadeada) e se será circular ou não.
* Feito isso, crie um programa teste (main.c) que deve ser capaz de ler como comandos de entrada os possíveis valores:
* -s : exibe a lista inteira
* -c : esvaziar toda a lista
* -a : inserir um novo elemento na lista com o valor especificado
* -a : inserir um novo elemento na lista em uma posição especificada pelo parâmetro “posicao"
* -r : remover todas as ocorrências de um elemento especificado da lista
* -m : exibe o maior valor da lista
* -sl : exibe o último elemento da lista
* -sf : exibe o primeiro elemento da lista
* -ss : exibe o tamanho da lista
* -sg : exibe a quantidade de elementos da lista são maiores que o valor especificado
*/

#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
#include <string.h>

int main() {
    char comando[4];
    int valor;
    int posicao;

    Lista *l = criar();
    while(1) {
        scanf("%s", comando);

        if(strcmp(comando, "-s") == 0) {
            exibir(l);
            break;
        }
        else if(strcmp(comando, "-c") == 0) {
            esvaziar(l);
        }
        else if(strcmp(comando, "-a") == 0) {
            scanf("%d", &valor);
            insere(l, valor);
        }
        else if(strcmp(comando, "-r") == 0) {
            scanf("%d", &valor);
            retira_n(l, valor);
        }
        else if(strcmp(comando, "-m") == 0) {
            printf("%d\n", maior(l));
        }
        else if(strcmp(comando, "-sl") == 0) {
            printf("%d\n", ultimo(l));
        }
        else if(strcmp(comando, "-sf") == 0) {
            printf("%d\n", primeiro(l));
        }
        else if(strcmp(comando, "-ss") == 0) {
            printf("%d\n", comprimento(l));
        }
        else if(strcmp(comando, "-sg") == 0) {
            scanf("%d", &valor);
            printf("%d\n", maiores(l, valor));
        }
        //scanf("%d", &valor);
        //scanf("%d", &posicao);
        //insere_posicao(l, valor, posicao);
    }
    return 0;
}