#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	int escolha = 0;

	// as introdu�oes abaixo ser�o executadas de uma vez 
	do {
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua op��o: ";
		std::cin >> escolha;

		switch (escolha) {
		case 1: std::cout << "\nTicket Meia Entrada Comprado\n";
			break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
			break;
		case 3: std::cout << "\nSaindo Meu Tickets...\n";
			break;
		default: std::cout << "\nOp��o Inv�lida!\n";
		}
	} while (escolha != 3); //enquanto escolha for diferente de 3 o menu vai aparecer! 
	//pois voc� est� solicitando que fique em loop at� que escolha seja igual a 3 
	//e resultado seja falso saindo do loop do-while
	system("PAUSE");
	return 0;
}