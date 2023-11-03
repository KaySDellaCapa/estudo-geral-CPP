# include <iostream>
# include <tchar.h>

int main() {
	_tsetlocale(LC_ALL, _T("portuguese")); // Para conseguir a linguagem em pt-br e poder usar pontuação
	
	// Declaração de variáveis
	// O local de memória que estamos solicitando ao computador deve ser capaz
	// de armazenar numeros inteiros.
	int NumVidas = 5;
	int Pontuacao = 1350;

	std::cout << "****INICIO DO JOGO****" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl; // Solicitando a variavel na tela
	std::cout << "Pontuação: " << Pontuacao << std::endl;

	std::cout << "==================================" << std::endl;
	std::cout << "Tamanho da variável NumVidas: " << sizeof(NumVidas) << "\n";
	std::cout << "Tamanho da variável Pontuacao: " << sizeof(Pontuacao) << "\n";
	
	std::cout << "==================================" << std::endl;
	std::cout << "Endereço de NumVidas ocupa na memória RAM: " << &NumVidas << "Bytes" << "\n";
	std::cout << "Endereço de Pontuação ocupa na memória RAM: " << &Pontuacao << "Bytes" << "\n";
	
	std::cout << "****DURANTE O JOGO****" << std::endl;
	// Agora vá até o valor que está contido, soma o valor escolhido. Assim como a subtração do valor escolhido
	Pontuacao = Pontuacao + 150; //Pontuacao += 150;
	NumVidas = NumVidas - 1; // NumVidas -= 1;
	std::cout << "Vidas do jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;

	system("PAUSE");

	return 0;

}