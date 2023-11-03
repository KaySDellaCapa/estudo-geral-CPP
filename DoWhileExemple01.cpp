#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	int escolha = 0;

	// as introduçoes abaixo serão executadas de uma vez 
	do {
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua opção: ";
		std::cin >> escolha;

		switch (escolha) {
		case 1: std::cout << "\nTicket Meia Entrada Comprado\n";
			break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
			break;
		case 3: std::cout << "\nSaindo Meu Tickets...\n";
			break;
		default: std::cout << "\nOpção Inválida!\n";
		}
	} while (escolha != 3); //enquanto escolha for diferente de 3 o menu vai aparecer! 
	//pois você está solicitando que fique em loop até que escolha seja igual a 3 
	//e resultado seja falso saindo do loop do-while
	system("PAUSE");
	return 0;
}