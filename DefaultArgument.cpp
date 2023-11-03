#include <iostream>

//PROTOTIPO
// void pois não retorna nada
//você pode colocar valores padrões no protótipo
//e então quando você chamar a função poderá omitir
//argumentos pois a função irá utilizar o argumento padrão se você não informar o argumento quando da chamada da função.
//Para colocar um valor padrão basta colocar =
void Coordenadas(int x, int i, int z);
//Você não é obrigado a colocar todos os argumentos padrão. Porém se deixar algum de fora deve seguir a regra que precisa
//colocar da direita para esquerda

int main() {

	//apesar da função solicitar na chamada a colocação de 3 argumentos que serão enviados aos parâmetros
	//x, y e z. Esta chamada sem você colocar argumentos irá funcionar, pois eles tem argumentos para
	Coordenadas(5, 4, 3);
	system("PAUSE");
	return 0;
}

void Coordenadas(int x, int i, int z) 
{
	// x = x * 10
	x *= 10;
	// y = y * 10
	i *= 10;
	z *= 10;
	std::cout << "(" << x << " - " << i << " - " << z << ")" << "\n";
}