#include <iostream>

int main() {
	int Numero01, Numero02;
	bool Comparacao;
	
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero 01 = " << Numero01 << "\n";
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero 02 = " << Numero02 << "\n";

	// = � comando de atribui��o 
	// == � operador de igualdade. Verifica se um operando � igual ao outro

	Comparacao = (Numero01 == Numero02); // Para compara��o
	std::cout << "Numero 01 igual a Numero 02?: " << Comparacao << "\n";
	Comparacao = (Numero01 != Numero02); // Para compara��o
	std::cout << "Numero 01 diferente de Numero 02?: " << Comparacao << "\n";
	Comparacao = (Numero01 > Numero02); // Para compara��o
	std::cout << "Numero 01 maior que Numero 02?: " << Comparacao << "\n";
	Comparacao = (Numero01 < Numero02); // Para compara��o
	std::cout << "Numero 01 menor que Numero 02?: " << Comparacao << "\n";
	Comparacao = (Numero01 >= Numero02); // Para compara��o
	std::cout << "Numero 01 maior ou igual a Numero 02?: " << Comparacao << "\n";
	Comparacao = (Numero01 <= Numero02); // Para compara��o
	std::cout << "Numero 01 menor ou igual a Numero 02?: " << Comparacao << "\n";

	system("PAUSE");

	return 0;
}