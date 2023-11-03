#include <iostream>

int main () {
std::cout << "==================================" << "\n";
std::cout << "SOMA" << "\n";
std::cout << "==================================" << "\n";

int Numero01, Numero02;
std::cout << "Digite o primeiro numero: " << "\n";
std::cin >> Numero01; // Entrada de dados
std::cout << "Numero 01 = " << Numero01 << "\n";
std::cout << "Digite o segundo numero: " << "\n";
std::cin >> Numero02; // Entrada de dados
std::cout << "Numero 02 = " << Numero02 << "\n";
int Soma = Numero01 + Numero02;
std::cout << "Resultado: " << Soma << "\n";

std::cout << "==================================" << "\n";
std::cout << "DIVISAO" << "\n";
std::cout << "==================================" << "\n";

int Numero03, Numero04;
std::cout << "Digite o primeiro numero: " << "\n";
std::cin >> Numero03; // Entrada de dados
std::cout << "Numero 01 = " << Numero03 << "\n";
std::cout << "Digite o segundo numero: " << "\n";
std::cin >> Numero04; // Entrada de dados
std::cout << "Numero 02 = " << Numero04 << "\n";
int Divisao = Numero03 / Numero04;
std::cout << "Resultado: " << Divisao << "\n";

std::cout << "==================================" << "\n";
std::cout << "RESTO DIVISAO" << "\n";
std::cout << "==================================" << "\n";

int Numero05, Numero06;
std::cout << "Digite o primeiro numero: " << "\n";
std::cin >> Numero05; // Entrada de dados
std::cout << "Numero 01 = " << Numero05 << "\n";
std::cout << "Digite o segundo numero: " << "\n";
std::cin >> Numero06; // Entrada de dados
std::cout << "Numero 02 = " << Numero06 << "\n";
int Resto = Numero05 / Numero06;
std::cout << "Resultado: " << Resto << "\n";

std::cout << "==================================" << "\n";
std::cout << "MULTIPLICACAO" << "\n";
std::cout << "==================================" << "\n";

int Numero07, Numero08;
std::cout << "Digite o primeiro numero: " << "\n";
std::cin >> Numero07; // Entrada de dados
std::cout << "Numero 01 = " << Numero07 << "\n";
std::cout << "Digite o segundo numero: " << "\n";
std::cin >> Numero08; // Entrada de dados
std::cout << "Numero 02 = " << Numero08 << "\n";
int Multiplicacao = Numero07 * Numero08;
std::cout << "Resultado: " << Multiplicacao << "\n";

std::cout << "==================================" << "\n";
std::cout << "SUBTRACAO" << "\n";
std::cout << "==================================" << "\n";

int Numero09, Numero10;
std::cout << "Digite o primeiro numero: " << "\n";
std::cin >> Numero09; // Entrada de dados
std::cout << "Numero 01 = " << Numero09 << "\n";
std::cout << "Digite o segundo numero: " << "\n";
std::cin >> Numero10; // Entrada de dados
std::cout << "Numero 02 = " << Numero10 << "\n";
int Sub = Numero09 - Numero10;
std::cout << "Resultado: " << Sub << "\n";

return 0;
}