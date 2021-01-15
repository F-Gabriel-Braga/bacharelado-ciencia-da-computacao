/*                       
* IFCE - Instituto Federal do Ceará - Campus Tianguá-CE
* Nome: FRANCISCO GABRIEL BRAGA DO NASCIMENTO
* Disciplina: Linguagem de Programação - I
* 2º Semestre (Bacharelado em Ciência da Computação) - 2020.2
*
* #2. Elabore uma matriz 3X3, preencha com nome de frutas em seguida exiba os resultados. 
*/

#include <stdio.h>
#include <windows.h>


int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char matFrutas[3][3][50];
    for(int i = 0; i < 3; i++) {
        for(int c = 0; c < 3; c++) {
            printf("Digite o nome de uma fruta:\n");
            scanf("%s", matFrutas[i][c]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int c = 0; c < 3; c++) {
            printf("%s ", matFrutas[i][c]);
            if((c + 1) == 3) {
                printf("\n");
            }
        }
    }
    return 0;
}