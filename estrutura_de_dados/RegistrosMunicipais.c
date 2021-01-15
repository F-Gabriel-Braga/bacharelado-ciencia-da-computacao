/*
* Desenvolva um programa que cadastre registros municipais. Cada registro deve possuir o nome do município, o estado e a população.
* A primeira leitura será o número de registros que será lido em seguida. Depois o programa irá ler cada registro seguindo a ordem
* de leitura: nome, estado (apenas a sigla com 2 caracteres) e o tamanho da população.
*
* Ao final, o programa deve exibir todos os municípios cadastrados do estado do CE e, além disso, os dados do município que contenha
* a maior população (independente de qual estado ele pertença).
*
* Observações:
* 1. Crie um novo tipo de dado para o registro
* 2. Manipule o registro por meio de um ponteiro
* 3. Escreva o programa de forma modularizada
* 4. Atente para a saída esperada
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    struct MunicipioEstrutura {
        char nome[100];
        char estado[2];
        double populacao;
    };
    typedef struct MunicipioEstrutura Municipio;

    int nRegistros;
    scanf("%d", &nRegistros);

    Municipio *municipios = malloc(nRegistros * sizeof(Municipio));

    for(int i = 0; i < nRegistros; i++) {
        scanf(" %[a-z A-Z]s", municipios[i].nome);
        scanf(" %[a-z A-Z]s", municipios[i].estado);
        scanf("%lf", &municipios[i].populacao);
    }
    
    int end = 0;
    double populacao = municipios[0].populacao;
    for(int i = 1; i < nRegistros; i++) {
        if(populacao < municipios[i].populacao) {
            populacao = municipios[i].populacao;
            end = i;
            printf("%lf", municipios[i].populacao);
        }
    }

    for(int i = 0; i < nRegistros; i++) {
        if((municipios[i].estado[0] == 'C') && (municipios[i].estado[1] == 'E')) {
            printf("%s", municipios[i].nome);
            printf("-");
            printf("%s\n", municipios[i].estado);
        }
    }
    printf("%s-%s = %.0lf\n", municipios[end].nome, municipios[end].estado, municipios[end].populacao);
}