/*
* Instituto Fedederal do Ceará Campus Tianguá
* Bacharelado em Ciências da Computação
* 2º Semestre - turma 2020
* Aluno: Francisco Alan Do Nascimento Marinho
* Professor: Rhyan Ximenes de Brito
* Diciplina: Linguagem de programação I
*
* #1. Leia 1 variável X inúmeras vezes (parar quando o valor digitado for <= 0).
* Cada valor lido definirá a quantidade de vezes do laço de repetição. Ao ser 
* definido a quantidade de iterações, informar em seguida, os nomes das pessoas, 
* dia e mês de nascimento, como saída exibir,o nome da pessoa e o signo do zodíaco que
* cada uma delas pertence. 
* Obs1. Utilizar o laço de repetição do{...} while(...). 
* Obs2. Validar os dados (não aceitando dia ou mês inexistente). 
* Obs3.Validar a variável que definirá a quantidade de iterações, onde a mesma não
* poderá ser menor que 10 nem maior que 20. 
*/

#include <stdio.h>
#include <windows.h>

//mensagem de erro.
void mensagem_erro (){
	
	printf("\n");
	printf("*************\n");
	printf("**  ERRO!! **\n");
	printf("*************\n");
	printf("\n");
	printf("Valor inválido!!\n");
	printf("Tente novamente.\n");
	printf("\n");
}

int main (){

	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);

	int valor;
	char nome[31], signo;
    int dia, mes;
	
	//Coleta e verifica o valor de repetições.
	printf("Digite um valor entre 10 e 20: ");
	scanf("%d", &valor);

	    do{
			if(valor < 10 || valor > 20){
				mensagem_erro();
				printf("Digite um valor entre 10 e 20: ");
		  scanf("%d", &valor);
			}
		}while(valor < 10 || valor > 20);
	
	//Bloco de repetições.
	for(int i = 0;i < valor;i++){
		
		//Coleta o nome.
		printf("Digite seu nome: ");
	    scanf(" %[^\n]s",&nome);
	    
		//Coleta e verifica a data de nascimento.
		printf("digite sua data de nascimento (dia mes): ");
		scanf("%d %d", &dia, &mes);
		
		do{
		if(dia < 1 || dia > 31 || mes < 1 || mes > 12){
			mensagem_erro();
			printf("digite sua data de nascimento (dia mes): ");
	        scanf("%d %d", &dia, &mes);
		}
		}while(dia < 1 || dia > 31 || mes < 1 || mes > 12);
		
		//Apresenta erro quando é digitado 31 dias em meses de no máximo 30.
		if(mes == 4 || mes == 6 || mes == 9 || mes == 11){		
			do{
				if(dia > 30){
					mensagem_erro();
					printf("digite sua data de nascimento (dia mes): ");
			        scanf("%d %d", &dia, &mes);
				}
			}while(dia > 30);
		}
		//Apresenta erro quando é digitado mais de 29 dias em Fevereiro.
		if(mes == 2){
			do{
				if(dia > 29){
					mensagem_erro();
					printf("digite sua data de nascimento (dia mes): ");
		            scanf("%d %d", &dia, &mes);
				}
			}while(dia > 29);
		}
	
		//Bloco que decide qual o signo e mostra o resultado.	
		if(mes == 1){
			if(dia < 19){
				printf("%s é do signo de Capricórnio\n",nome);
			}else{
				printf("%s é do signo de Aquário\n",nome);
			}
		}
		if(mes == 2){
			if(dia < 18){
				printf("%s é do signo de Aquário\n",nome);
			}else{
				printf("%s é do signo de Peixes\n",nome);
			}
		}
		if(mes == 3){
			if(dia < 19){
				printf("%s é do signo de Peixes\n",nome);
			}else{
				printf("%s é do signo de Áries\n",nome);
			}
		}
		if(mes == 4){
			if(dia < 19){
				printf("%s é do signo de Áries\n",nome);
			}else{
				printf("%s é do signo de Touro\n",nome);
			}
		}
		if(mes == 5){
			if(dia < 19){
				printf("%s é do signo de Touro\n",nome);
			}else{
				printf("%s é do signo de Gêmeos\n",nome);
			}
		}
		if(mes == 6){
			if(dia < 19){
				printf("%s é do signo de Gêmeos\n",nome);
			}else{
				printf("%s é do signo de Câncer\n",nome);
			}
		}
		if(mes == 7){
			if(dia < 19){
				printf("%s é do signo de Câncer\n",nome);
			}else{
				printf("%s é do signo de Leão\n",nome);
			}
		}
		if(mes == 8){
			if(dia < 19){
				printf("%s é do signo de Leão\n",nome);
			}else{
				printf("%s é do signo de Virgem\n",nome);
			}
		}
		if(mes == 9){
			if(dia < 19){
				printf("%s é do signo de Virgem\n",nome);
			}else{
				printf("%s é do signo de Libra\n",nome);
			}
		}
		if(mes == 10){
			if(dia < 19){
				printf("%s é do signo de Libra\n",nome);
			}else{
				printf("%s é do signo de Escorpião\n",nome);
			}
		}
		if(mes == 11){
			if(dia < 19){
				printf("%s é do signo de Escorpião\n",nome);
			}else{
				printf("%s é do signo de Sargitário\n",nome);
			}
		}
		if(mes == 12){
			if(dia < 19){
				printf("%s é do signo de Sargitário\n",nome);
			}else{
				printf("%s é do signo de Capricórnio\n",nome);
			}
		}
	}
	return 0;
}
