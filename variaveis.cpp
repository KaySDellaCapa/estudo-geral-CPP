# include <iostream>
# include <tchar.h>

int main() {
	_tsetlocale(LC_ALL, _T("portuguese")); // Para conseguir a linguagem em pt-br e poder usar pontua��o
	
	// Declara��o de vari�veis
	// O local de mem�ria que estamos solicitando ao computador deve ser capaz
	// de armazenar numeros inteiros.
	int NumVidas = 5;
	int Pontuacao = 1350;

	std::cout << "****INICIO DO JOGO****" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl; // Solicitando a variavel na tela
	std::cout << "Pontua��o: " << Pontuacao << std::endl;

	std::cout << "==================================" << std::endl;
	std::cout << "Tamanho da vari�vel NumVidas: " << sizeof(NumVidas) << "\n";
	std::cout << "Tamanho da vari�vel Pontuacao: " << sizeof(Pontuacao) << "\n";
	
	std::cout << "==================================" << std::endl;
	std::cout << "Endere�o de NumVidas ocupa na mem�ria RAM: " << &NumVidas << "Bytes" << "\n";
	std::cout << "Endere�o de Pontua��o ocupa na mem�ria RAM: " << &Pontuacao << "Bytes" << "\n";
	
	std::cout << "****DURANTE O JOGO****" << std::endl;
	// Agora v� at� o valor que est� contido, soma o valor escolhido. Assim como a subtra��o do valor escolhido
	Pontuacao = Pontuacao + 150; //Pontuacao += 150;
	NumVidas = NumVidas - 1; // NumVidas -= 1;
	std::cout << "Vidas do jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;

	system("PAUSE");

	return 0;

}