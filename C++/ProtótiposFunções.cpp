#include <iostream>

//Podemos informar ao compilador que a fun��o existe
//e que iremos declarar ela posteriormente,
//isso � feito atrav�s dos prot�tipos das fun��es.
//Coloque apenas o cabe�alho da fun��o terminado com ;
float soma(float num1, float num2);

//main j� � uma fun��o. Observe o tipo de retorno int com nome main
//n�o recebendo par�metros neste exemplo.

/**int main()
{
	//A execu��o do programa � realizado de cima para baixo.
	std::cout << soma(100, 500) << "\n";
	system("pause");

	return 0;
}*/

float soma(float num1, float num2)
{
	return (num1 + num2);
}