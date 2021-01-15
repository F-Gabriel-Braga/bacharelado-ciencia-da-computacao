/*
* Faça uma função que receba como parâmetro um valor numérico e mostre a seguinte tabela de histogramas:
* Elemento   Valor   Histograma
* A          4       ∗∗∗∗
* B          2       ∗∗
* C          8       ∗∗∗∗∗∗∗∗
* D          12      ∗∗∗∗∗∗∗∗∗∗∗∗
* E          1       ∗

* A quantidade de elementos deve ser lida no programa principal, bem como cada valor do histograma. A quantidade de elementos será o parâmetro para uma alocação dinâmica do histograma.
*/

#include <stdio.h>
#include <stdlib.h>

void histograma(int *numeros, int n) {
    for (int i = 0; i < n; i++) {
        if(i == 0) {
            printf("A");
        }
        else if(i == 1) {
            printf("B");
        }
        else if(i == 2) {
            printf("C");
        }
        else if(i == 3) {
            printf("D");
        }
        else if(i == 4) {
            printf("E");
        }
        else if(i == 5) {
            printf("F");
        }
        else if(i == 6) {
            printf("G");
        }
        else if(i == 7) {
            printf("H");
        }
        else if(i == 8) {
            printf("I");
        }
        else if(i == 9) {
            printf("J");
        }
        else if(i == 10) {
            printf("K");
        }
        else if(i == 11) {
            printf("L");
        }
        else if(i == 12) {
            printf("M");
        }
        else if(i == 13) {
            printf("N");
        }
        else if(i == 14) {
            printf("O");
        }
        else if(i == 15) {
            printf("P");
        }
        else if(i == 16) {
            printf("Q");
        }
        else if(i == 17) {
            printf("R");
        }
        else if(i == 18) {
            printf("S");
        }
        else if(i == 19) {
            printf("T");
        }
        else if(i == 20) {
            printf("U");
        }
        else if(i == 21) {
            printf("V");
        }
        else if(i == 22) {
            printf("W");
        }
        else if(i == 23) {
            printf("X");
        }
        else if(i == 24) {
            printf("Y");
        }
        else if(i == 25) {
            printf("Z");
        }
        printf(" %d ", numeros[i]);
        if(numeros[i] == 0) {
            printf("\n");
        }
        else {
            for(int c = 0; c < numeros[i]; c++) {
                printf("*");
                if((c + 1) == numeros[i]) {
                    printf("\n");
                }
            }
        }
    }
}

int main() {
    int elementos, *valores;
    scanf("%d", &elementos);
    valores = malloc(elementos * sizeof(int));
    for(int i = 0; i < elementos; i++) {
        scanf("%d", &valores[i]);
    }
    histograma(valores, elementos);
    return 0;
}