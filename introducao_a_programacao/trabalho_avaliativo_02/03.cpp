#include <stdio.h>
#include <locale.h>

int inicioH, inicioM, fimH, fimM, horas, minutos;

void calculaTempoJogo(int iH, int iM, int fH, int fM, int *h, int *m) {
	if(fH > iH) {
		*h = fH - iH;
	}
	else if(iH > fH) {
		*h = (24 - iH) + fH;
	}
	else if(iH == fH) {
		*h = 24;
	}
	
	if(iM < fM) {
		*m = fM - iM;
	}
	else if(iM > fM) {
		*h = *h - 1;
		*m = (60 - iM) + fM;
	}
	else if(iM == fM) {
		*m = 0;
	}
	
	return;
}

int main() {
	setlocale(LC_ALL, "");
	printf("Digite as horas em que começou o jogo:\n");
	scanf("%d", &inicioH);
	printf("Digite os minutos em que começou o jogo:\n");
	scanf("%d", &inicioM);
	printf("Digite a hora em que terminou o jogo:\n");
	scanf("%d", &fimH);
	printf("Digite os minutos em que terminou o jogo:\n");
	scanf("%d", &fimM);
	calculaTempoJogo(inicioH, inicioM, fimH, fimM, &horas, &minutos);
	if((horas == 24 && minutos == 0) || (horas < 24)) {
		printf("Horas: %d\n", horas);
		printf("Minutos: %d\n", minutos);
	}
	return 0;
}
