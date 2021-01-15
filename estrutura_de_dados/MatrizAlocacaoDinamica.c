/*
* Implemente funções que recebam por parâmetro uma matriz capaz de armazenar valores reais e seu tamanho. As funções devem seguir a seguinte assinatura: (int linha, int coluna, float *mat).
* O programa deve:

* Alocar dinamicamente a matriz;
* Ler os valores da matriz (as dimensões devem ser lidas no programa principal);
* Retornar o cálculo do determinante da matriz;
* Multiplicar a matriz por um valor escalar;
* Exibir a matriz em um formato apropriado.
*/

#include <stdio.h>
#include <stdlib.h>

float menorComplementar(int ordem, int i, int j, float **mat);
float cafator(int ordem, int i, int j, float **mat);
float determinanteMatOrdemMaior(int ordem, float **mat);

// Calcular determinante de Matriz 2x2
float determinanteMatOrdem2(float **mat) {
    float determinante = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    return determinante;
}

// Calcular determinante de Matriz 3x3
float determinanteMatOrdem3(float **mat) {
    float determinante, soma1 = 0.0, soma2 = 0.0;
    float matAux[3][5];
    for(int i = 0; i < 3; i++) {
        for(int c = 0; c < 3; c++) {
            matAux[i][c] = mat[i][c];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int c = 3; c < 5; c++) {
            matAux[i][c] = mat[i][c-3];
        }
    }
    for(int i = 0; i < 3; i++) {
        soma1 += (matAux[0][i] * matAux[1][i+1] * matAux[2][i+2]);
    }

    for(int i = 2; i >= 0; i--) {
        soma2 += (matAux[0][i+2] * matAux[1][i+1] * matAux[2][i]);
    }
    determinante = soma1 - soma2;
    return determinante;
}

// Determinante | Teorema de Laplace
float determinanteMatOrdemN(int ordem, float **mat) {
    float determinante = 0.0;
    if(ordem == 2) {
        determinante = determinanteMatOrdem2(mat);
    }
    else {
        for(int s = 0; s < ordem; s++) {
            int contador;
            float ordemAux = ordem - 1;
            float *aux = malloc(ordemAux * ordemAux * sizeof(float));
            float **matAux;
            matAux = malloc(ordemAux * sizeof(float));
            for (int a = 0; a < ordemAux; a++){
                matAux[a] = malloc(ordemAux * sizeof(float));
            }

            contador = 0;
            for(int a = 0; a < ordem; a++) {
                for(int b = 0; b < ordem; b++) {
                    if(((a+1) != 1) && (b != s)) {
                        aux[contador] = mat[a][b];
                        contador++;
                    }
                }
            }
            
            contador = 0;
            for(int a = 0; a < ordemAux; a++) {
                for(int b = 0; b < ordemAux; b++) {
                    matAux[a][b] = aux[contador];
                    contador++;
                }
            }

            float cofator;
            if((s+2) % 2 == 0) {
                cofator = determinanteMatOrdemN(ordemAux, matAux);
            }
            else {
                cofator = (-1 * determinanteMatOrdemN(ordemAux, matAux));
            }
            determinante += (cofator * mat[0][s]);
        }
    }
    return determinante;
}

void matAlocDin(int linha, int coluna, float **mat) {
    for(int i = 0; i < linha; i++) {
        for(int c = 0; c < coluna; c++) {
            scanf("%f", &mat[i][c]);
        }
    }
    for(int i = 0; i < linha; i++) {
        for(int c = 0; c < coluna; c++) {
            printf("%.1f ", mat[i][c]);
            if((c + 1) == coluna) {
                printf("\n");
            }
        }
    }
    if(linha == 2) {
        printf("Determinante=%.2f", determinanteMatOrdem2(mat));
    }
    else if(linha == 3) {
        printf("Determinante=%.2f", determinanteMatOrdem3(mat));
    }
    else if(linha > 3) {
        printf("Determinante=%.2f", determinanteMatOrdemN(linha, mat));
    }
}

int main() {
    int r, c;
    float **v;
    scanf("%d", &r);
    scanf("%d", &c);

    v = malloc(r * sizeof(float));
    for(int i = 0; i < r; i++) {
        v[i] = malloc(c * sizeof(float));
    }

    matAlocDin(r, c, v);
    return 0;
}