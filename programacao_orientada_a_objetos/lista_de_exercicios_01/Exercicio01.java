/*
* 1) Peras custam R$ 1,00 cada se forem compradas menos do que uma dúzia, e R$ 0,75 se
* forem compradas pelo menos doze. Escreva um programa que leia o número de peras
* compradas, calcule e escreva o valor total dessa compra.
*/

import java.util.Scanner;

public class Exercicio01 {
    public static void main(String[] args) {
    	Scanner entrada = new Scanner(System.in);
    	
    	System.out.println("Digite a quantidade de peras:");
    	int qntPeras = entrada.nextInt();
    	double valorTotal = 0.0;
    	if((qntPeras >= 0) && (qntPeras < 12)) {
    		valorTotal = (qntPeras * 1);
    	}
    	else if(qntPeras >= 0) {
    		valorTotal = (qntPeras * 0.75);
    	}

		System.out.printf("O valor a pagar é: R$ %.2f", valorTotal);

    	entrada.close();
    }
}