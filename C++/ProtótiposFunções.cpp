#include <iostream>

//Podemos informar ao compilador que a função existe
//e que iremos declarar ela posteriormente,
//isso é feito através dos protótipos das funções.
//Coloque apenas o cabeçalho da função terminado com ;
float soma(float num1, float num2);

//main já é uma função. Observe o tipo de retorno int com nome main
//não recebendo parâmetros neste exemplo.

/**int main()
{
	//A execução do programa é realizado de cima para baixo.
	std::cout << soma(100, 500) << "\n";
	system("pause");

	return 0;
}*/

float soma(float num1, float num2)
{
	return (num1 + num2);
}