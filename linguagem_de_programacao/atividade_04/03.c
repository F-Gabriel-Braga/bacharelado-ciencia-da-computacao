/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre 2020.1
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #3. Construa um algoritmo que exiba os números pares e os ímpares entre dois intervalos informados. Por exemplo: intervalo inicial: 3 e intervalo final: 30.
* Obs1. O intervalo inicial deve ser menor que o intervalo final.
* Obs2. Validar os intervalos de modo que só aceite o intervalo menor < intervalo maior.
* Obs3. O intervalo menor assim como o intervalo maior não podem ser Zero (nulo).
* Obs4. Utilizar o laço de repetição (for).
*/

#include <stdio.h>
#include <Windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n1, n2, intervalo;
    printf("Informe intervalo inicial:\n");
    scanf("%d", &n1);
    printf("Informe intervalo final:\n");
    scanf("%d", &n2);
    if(n1 == 0 || n2 == 0) {
        printf("Os intervalos não podem ser igual a 0.");
    }
    if(n1 > n2) {
        printf("O intervalo inicial deve ser menor que o intervalo final.");    
    }
    else {
        int n;
        intervalo = n2 - n1;
        for(int c = 0; c <= 1; c++) {
            for(int i = 0; i <= intervalo; i++) {
                n = n1 + i;
                if(c == 0) {
                    (i == 0) ? printf("Pares:\n"): printf("");
                    if(n % 2 == 0) {
                        printf("%d\n", n);
                    }
                }
                else {
                    (i == 0) ? printf("Ímpares:\n"): printf("");
                    if(n % 2 != 0) {
                        printf("%d\n", n);
                    }

                }
            }
        }
    }
}