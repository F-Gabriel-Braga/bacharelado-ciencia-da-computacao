
/*
* Elabore um programa que receba o nome de n produtos e seus respectivos preços, armazeneos em dois vetores separados,
* um para os produtos e outro para os preços. O programa deve calcular e mostrar:
* a) A quantidade de produtos com preço inferior a R$ 40,00;
* b) O nome dos produtos com preço entre R$ 40,00 e R$ 100,00;
* c) A média dos preços dos produtos com preço superior a R$ 100,00.
*/

import java.util.Scanner;

public class ExercicioFixacao05 {
	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);

		String[] produtos = new String[10];
		double[] precos = new double[10];

		System.out.print("Digite o nome de cada produto e tecle enter:\n");
		for(int i = 0; i < 10; i++) {
			produtos[i] = entrada.nextLine();
		}

		int qdpcpia40 = 0; // quantidade de produtos com preço inferior a 40
		String[] pcpe40e100 = {"", "", "", "", "", "", "", "", "", ""}; // produtos com preço entre R$ 40,00 e R$ 100,00
		double mdpdpcpsa100 = 0.0; // média dos preços dos produtos com preço superior a R$ 100,00
		int mdpdpcpsa100Aux = 0;

		for(int i = 0; i < 10; i++) {
			System.out.printf("Digite o preco do(a) %s:\n", produtos[i]);
			precos[i] = entrada.nextDouble();

			if(precos[i] < 40.0) {
				qdpcpia40++;
			}

			if(precos[i] >= 40.0 && precos[i] <= 100.0) {
				pcpe40e100[i] = produtos[i];
			}

			if(precos[i] > 100.0) {
				mdpdpcpsa100 += precos[i];
				mdpdpcpsa100Aux++;
			}
		}

		if(mdpdpcpsa100Aux > 0) {
			mdpdpcpsa100 /= mdpdpcpsa100Aux;
		}

		System.out.printf("Quantidade de produtos com preço inferior a 40: %d\n", qdpcpia40);
		System.out.printf("Média dos preços dos produtos com preço superior a R$ 100,00: %.2f\n", mdpdpcpsa100);
		System.out.print("Produtos com preço entre R$ 40,00 e R$ 100,00: \n");
		for(int i = 0; i < 10; i++) {
			if(!(pcpe40e100[i].equals(""))) {
				System.out.print(pcpe40e100[i] + "\n");
			}
		}

		entrada.close();
	}
}