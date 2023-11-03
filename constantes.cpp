#include <iostream>
#define NUM_VIDAS 10

int main() {

	// Se usar o define, pré-processa o total de vidas de NUM_VIDAS
	//const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	std::cout << "Total de vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";

	system("PAUSE");


	return 0;
}