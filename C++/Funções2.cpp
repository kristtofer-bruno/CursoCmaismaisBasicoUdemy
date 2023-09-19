#include <iostream>

// o que a função vai retornar? - Um valor int
// tipo de retorno da função
int SomaAUmNumero(int Numero, int NumeroAserSomado)
{
	return Numero + NumeroAserSomado;
}

void Mensagem()
{
	std::cout << "\nMensagem de Marte... Chegamos bem...\n\n";
}

int main()
{
	int Numero, NumeroAserSomado, retornoDaFuncao;

	Mensagem();
	std::cout << "Digite um numero: ";
	std::cin >> Numero;
	std::cout << "Digite o numero a ser somado: ";
	std::cin >> NumeroAserSomado;
	std::cout << "A soma deste Numero:" << Numero << " com o Numero:" << NumeroAserSomado
		<< " sera:" << SomaAUmNumero(Numero, NumeroAserSomado) << "\n\n";
	system("pause");
	std::cout << "\nResultado de " << Numero << " com 150 + 1400: " << SomaAUmNumero(Numero, SomaAUmNumero(150, 1400)) << "\n\n";

	return 0;
}