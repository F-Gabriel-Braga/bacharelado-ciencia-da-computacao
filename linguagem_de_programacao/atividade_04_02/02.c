/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2º Semestre | 2020
* Aluno: Francisco Gabriel Braga do Nascimento
* Professor: Rhyan Ximenes de Brito
* Diciplina: Linguagem de programação I
*
* #.2 Construa um algoritmo que utilizando as funçõesde manipulação
* de arquivos pegue o texto_gravado.txt da questão anterior e leio. 
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

    if((arquivo = fopen("texto_gravado.txt", "r")) == NULL) {
        puts("ERRO: Criar arquivo");
        exit(1);
    }

    while(fgets(frase, 100, arquivo) != NULL) {
        printf("%s", frase);
    }

    fclose(arquivo);
}