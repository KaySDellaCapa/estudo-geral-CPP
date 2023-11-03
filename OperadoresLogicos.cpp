#include <iostream>

int main() {
	setlocale(LC_ALL, ("portuguese"));
	double Numero;
	bool ResultadoLogico;
	bool ResultadoLogico2;
	std::cout << "Digite um numero: ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";
	// A variavel booleana MaiorQue100 ira receber o valor da comparação
	ResultadoLogico = ((Numero > 100) && (Numero != 0));
	std::cout << "O resultado lógico da expressão ((Numero > 100) && (Numero != 0)) é : " << ResultadoLogico << "\n";
	ResultadoLogico2 = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);
	std::cout << "O resultado lógico da expressão ((Numero == 100) || (Numero > 200)) && (Numero < 1000) é : " << ResultadoLogico2 << "\n";

	system("PAUSE");

	return 0;

}