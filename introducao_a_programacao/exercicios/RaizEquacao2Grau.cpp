#include <stdio.h>
#include <math.h>

float a, b, c, delta, x1, x2;

int main() {
	printf("Digite o valor de a:");
	scanf("%f", &a);
	printf("Digite o valor de b:");
	scanf("%f", &b);
	printf("Digite o valor de c:");
	scanf("%f", &c);
	delta = (b * b) - (4 * a * c);
	x1 = (-(b) + sqrt(delta)) / 2 * a;
	x2 = (-(b) - sqrt(delta)) / 2 * a;
	printf("As raizes dessa funcaoo eh igual a: %.2f e %.2f", x1, x2);
	return 0;
}
