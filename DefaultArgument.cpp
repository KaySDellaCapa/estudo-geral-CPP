#include <iostream>

//PROTOTIPO
// void pois n�o retorna nada
//voc� pode colocar valores padr�es no prot�tipo
//e ent�o quando voc� chamar a fun��o poder� omitir
//argumentos pois a fun��o ir� utilizar o argumento padr�o se voc� n�o informar o argumento quando da chamada da fun��o.
//Para colocar um valor padr�o basta colocar =
void Coordenadas(int x, int i, int z);
//Voc� n�o � obrigado a colocar todos os argumentos padr�o. Por�m se deixar algum de fora deve seguir a regra que precisa
//colocar da direita para esquerda

int main() {

	//apesar da fun��o solicitar na chamada a coloca��o de 3 argumentos que ser�o enviados aos par�metros
	//x, y e z. Esta chamada sem voc� colocar argumentos ir� funcionar, pois eles tem argumentos para
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