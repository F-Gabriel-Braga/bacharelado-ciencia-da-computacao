#include<stdio.h>
#include<locale.h>

float compra(float valor)
{
	int opcao;
	float valor_pagar;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite 1- Pagamento � vista com 10 porcento de desconto\n");
	printf("Digite 2- Pagamento em 2 vezes (pre�o normal do produto)\n");
	printf("Digite 3- Pagamento de 3 at� 5 vezes com acr�scimo de 2 porcento de juros ao m�s.\n");
	printf("\n Escolha sua forma de pagamento:\n");
	scanf("%d", &opcao);
	switch (opcao){
		case 1:
			printf("Pagamento � vista com 10 porcento de desconto\n");
			valor_pagar=valor-(valor*0.10);
			printf("Valor a pagar: %.2f",valor_pagar);
			break;
		case 2:
			printf("Pagamento em 2 vezes (pre�o normal do produto).\n");
		    valor_pagar=valor/2;
		    printf("O valor das parcelas ser�: %.2f\n",valor_pagar);
			break;
		case 3:
			printf("Pagamento de 3 at� 5 vezes com acr�scimo de 2 porcento de juros ao m�s.\n");valor_pagar= (valor+valor*0.02);
			int parcelas;
			printf("Digite a quantidade de parcelas:\n");
			scanf("%d", &parcelas);
			valor_pagar = (valor / parcelas) * 1.02;
			printf("Valor a pagar %.2f",valor_pagar);
			break;
		default:
			printf("O n�mero digitado n�o condiz com as op��es dispon�veis! Digite 1, 2 ou 3!");
	}
	return valor_pagar;
}
	
int main() 

{
	float valor;
	printf("Digite o valor total da compra:\n");
	scanf("%f",&valor);
	compra(valor);	
return 0;	
}



