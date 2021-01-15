/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2º Semestre | 2020
* Aluno: Francisco Gabriel Braga do Nascimento
* Professor: Rhyan Ximenes de Brito
* Diciplina: Linguagem de programação I
*
* #1. Construa uma algoritmo que utilizando as funções de manipulação de arquivos,
* receba uma frase e grave-o em um arquivo.txt com o nome texto_gravado.txt.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    FILE *arquivo;
    char frase[100];

    printf("Digite uma frase:\n");
    scanf("%[^\n]s", frase);

    if((arquivo = fopen("texto_gravado.txt", "w")) == NULL) {
        puts("ERRO: Criar arquivo");
        exit(1);
    }

    fprintf(arquivo, frase);

    fclose(arquivo);
}