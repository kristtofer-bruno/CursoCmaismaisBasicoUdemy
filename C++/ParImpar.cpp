#include <iostream>

bool isPAR(int num);

int main()
{
	int Numero;
	std::cout << "\nDigite um numero inteiro: ";
	std::cin >> Numero;
	if (isPAR(Numero) == true) {
		std::cout << "\nNumero: " << Numero << "PAR\n";
	}
	else if (isPAR(Numero) == false) {
		std::cout << "\nNumero: " << Numero << " - IMPAR\n";
	}
	return 0;
}

bool isPAR(int num)
{
	if (num % 2 == 0) //Se n�mero for par, retorne true,
		return true;
	else
		return false; //se n�o, retorne false
}