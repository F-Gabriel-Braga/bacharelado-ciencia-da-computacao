#include <stdio.h>

float precofabrica, percetualLucroDistribuidor, percentualImpostoFabricado, imposto, distribuidor;

int main() {
	printf("Digite o valor do preco de fabrica do veiculo:\n");
	scanf("%f", &precofabrica);
	printf("Digite o valor do percentual de lucro do distribuidor:\n");
	scanf("%f", &percetualLucroDistribuidor);
	printf("Digite o valor do percentual de impostos:\n");
	scanf("%f", &percentualImpostoFabricado);
	distribuidor = precofabrica * (percetualLucroDistribuidor)/100;
	imposto = precofabrica * (percentualImpostoFabricado)/100;
	printf("O valor correspondente ao lucro do distribuidor eh: %.2f\n", distribuidor);
	printf("O valor correspondente aos impostos eh: %.2f\n", imposto);
	printf("Oo preco final do veiculo eh: %.2f\n", (precofabrica + imposto + distribuidor ));
	return 0;
}
