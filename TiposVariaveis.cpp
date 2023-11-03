#include <iostream> 
#include <iomanip>

int main() {
	int Numero1;
	Numero1 = 45;
	std::cout << "Valor do Numero: " << Numero1 << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero1) << std::endl;
	std::cout << "Endereco carregado na memoria: " << &Numero1 << std::endl;

	float Numero2;
	Numero2 = 55.56f;
	std::cout << "Valor do Numero: " << Numero2 << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero2) << std::endl;
	std::cout << "Endereco carregado na memoria: " << &Numero2 << std::endl;

	double Numero3 = 45345.904555;
	std::cout << "Valor do Numero: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero3) << std::endl;
	std::cout << "Endereco carregado na memoria: " << &Numero3 << std::endl;

	char Caractere1 = '3';
	char Caractere2 = 'k';
	std::cout << "Valor do Caractere1: " << Caractere1 << std::endl;
	std::cout << "Tamanho da Variavel Caractere1: " << sizeof(Caractere1) << std::endl;
	std::cout << "Endereco carregado na memoria: " << (void *) & Caractere1 << std::endl;

	std::cout << "Valor do Caractere1: " << Caractere2 << std::endl;
	std::cout << "Tamanho da Variavel Caractere1: " << sizeof(Caractere2) << std::endl;
	std::cout << "Endereco carregado na memoria: " << (void *) &Caractere2 << std::endl;

	// 0 é considerado como false. Qualquer coisa diferente de 0 é verdadeiro
	bool bAchou;
	// 1 é true
	bAchou = 1;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	// 0 é falso
	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 'd';
	std::cout << "Valor de bAchou: " << bAchou << "\n";



	system("PAUSE");

	return 0;
}