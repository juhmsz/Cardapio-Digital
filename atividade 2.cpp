#include <stdio.h>
#include <locale.h>

	void exibirMenu () { //Exibe o menu a cada loop 
		printf(" \n");
		printf("=============  MENU  ===============\n");
		printf("PRATO PRINCIPAL:\n");
		printf("1) Macarr�o ao molho branco  R$30\n");
		printf("2) Espaguete � Carbonara     R$30\n");
		printf("3) Lasanha Folheada          R$37\n");
		printf("4) Tortelli                  R$35\n");
		printf("BEBIDA:\n");
		printf("5) Soda Italiana             R$15\n");
		printf("6) Vinho Branco (ta�a)       R$30\n");
		printf("7) Drink de Morango          R$25\n");
		printf("SOBREMESA:\n");
		printf("8) Petit Gateua              R$20\n");
		printf("9) Tiramis�                  R$15\n");
		printf("10) Finalizar\n");
		printf("====================================\n");
		printf("Escolha sua op��o:\n");
	}

int main () {
	
	setlocale(LC_ALL, "Portuguese"); //Usado para permitir a sa�da de caracteres especiais no IDE Dev C++
	
	int opcao;
	float conta = 0;
	float desconto;
	float conta_final;
	
	printf("Seja bem vindo ao card�pio digital do restaurante MAMA MIA!\n");
	printf("O card�pio conta com op��es de\n");
	printf("Pratos principais\n");
	printf("Bebidas\n");
	printf("E Sobremesas\n");
	
	do {
		exibirMenu ();
		scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf("Macarr�o ao molho branco adicionado � lista!\n");
			conta += 30; //Fun��o que adiciona o valor a cada loop na vari�vel "Conta"
			printf("Conta:R$%.2f", conta);
			break;
		case 2:
			printf("Espaguete � Carbonara adiconado � lista!\n");
			conta+=30;
			printf("Conta: R$%.2f", conta);
			break;
		case 3:
			printf("Lasanha Folheada adiconado � lista!\n");
			conta+=37;
			printf("Conta: R$%.2f", conta);
			break;
		case 4:
			printf("Tortelli adicionado � lista!\n");
			conta+=35;
			printf("Conta:R$%.2f", conta);
			break;
		case 5:
			printf("Soda Italiana adiconado � lista!\n");
			conta+=15;
			printf("Conta:R$.2%f", conta);
			break;
		case 6:
			printf("Vinho branco adiconado � lista!\n");
			conta+=30;
			printf("Conta:R$%.2f", conta);
			break;
		case 7:
			printf("Drink de Morango adiconado � lista!\n");
			conta+=25;
			printf("Conta:R$%.2f", conta);
			break;
		case 8:
			printf("Petit Gateua adiconado � lista!\n");
			conta+=20;
			printf("Conta:R$%.2f", conta);
			break;
		case 9:
			printf("Tiramis� adiconado � lista!\n");
			conta+=15;
			printf("Conta:R$%.2f", conta);
			break;	
		case 10:
			printf("Pedido finalizado!\n");
			break;
		default:
			printf("Op��o inv�lida. Por favor, procure digitar n�meros segundo as op��es do Menu!\n");
	}
} while (opcao != 10);

	printf(" \n");
	printf("Pedido final: \n");
	if (conta >= 100) {
		printf("Seu pedido foi maior que R$100, parab�ns ganhou 5 porcento de desconto!\n"); //Desconto adicionada a partir de um valor m�nimo
		desconto = (conta * 0,05);
		conta = (conta - desconto);
		printf("Valor final:R$%.2f\n", conta);
	} else {
		printf("Valor final:R$%.2f\n", conta); //Sem desconto por n�o atingir o valor min�mo
	}
	printf(" \n");
	printf("Agradecemos por escolher o restaurante MAMA MIA! Tenha uma boa refei��o e volte sempre.\n");
	return 0;	
}
