/*
* Instituto Fedederal do Ceará Campus Tianguá
* Bacharelado em Ciências da Computação
* 2º Semestre - turma 2020
* Aluno: GERLAN ALVES MUNIZ
* Professor: Rhyan Ximenes de Brito
* Diciplina: Linguagem de programação I
*
* 4. Elabore um algoritmo que receba 20 números e verifique se o mesmo é par ou ímpar, 
* se for ímpar imprimir o cubo do número, se par imprimi-lo na quinta potência. 
* Obs1. Utilizar o laço de repetição do{...} while(...).
* Obs2. Validar os dados.
*/

#include <stdio.h>
#include <math.h>

int main(){
	int i, p, c=1;
	do{
		printf("Digite um numero: ");
		scanf("%d", &i);
		
		if(i%2 == 0){
		printf("o numero digitado eh par! \n");	
		printf(" o cubo do numero eh: %d \n", p = pow(i,3));
		}
		else {
			printf("o numero eh impar! \n");
			printf(" a quinta potencia do numero eh: %d \n", p = pow(i,5));
		}
		c++;	
	} while(c <=20);
}