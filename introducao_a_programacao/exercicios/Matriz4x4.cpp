#include <stdio.h>

int calculaDiagonalSecundaria(int matriz[4][4]) {
     int diagonalS = 0;
     for(int i = 0; i < 4; i++) {
          for(int c = 0; c < 4; c++) {
                if( (i + c + 2) == 5 ) {
                     diagonalS += matriz[i][c];
                }
          }
     }
     return diagonalS;
}

int main() {
	int matriz[4][4];
	for(int i = 0; i < 4; i++) {
	   for(int c = 0; c < 4; c++) {
	        printf("Digite um numero da linha %d da coluna %d:\n", (i + 1), (c + 1));
	        scanf("%d", &matriz[i][c]);
	   }
	}
	printf("O valor da diagonal secundaria eh: %d", calculaDiagonalSecundaria(matriz));
	return 0;
}
