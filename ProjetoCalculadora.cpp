#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>

using namespace std;

void sistemaCalculadora() {
	
	//Infos

	setlocale(LC_ALL,""); //Alteração para Localização atual
	
	cout << "Bem vindo a Cálculadora em C++" << endl;
	
	//Variáveis
	
	int selecionarOpcao, numeroInformado, numeroInformado2, resultado, opcaoSelecionada, resposta;
	// Programa
	
	cout << "Digite uma opção abaixo para realizar uma operação" << endl;
	cout << "1 - Adição" << endl;
	cout << "2 - Subtração" << endl;
	cout << "3 - Multiplicação" << endl;
	cout << "4 - Divisão" << endl;
	
	cin >> selecionarOpcao;
	
	switch (selecionarOpcao) {
		case 1: 
			int opcaoSelecionada;
			cout << "Informe o primeiro número: " << endl;
			cin >> numeroInformado;
			cout << "Informe o segundo número para adição: " << endl;
			cin >> numeroInformado2;
			resultado = numeroInformado + numeroInformado2;
			cout << numeroInformado << "+" << numeroInformado2 << " É igual a: " << resultado << endl;
			
			cout << "1 - Voltar ao Menu" << endl;
			cout << "2 - Créditos" << endl;
			cin >> resposta;
			
			if (resposta == 1)
			{
				sistemaCalculadora();
			}
			else if (resposta == 2)
			{
				cout << "Desenvolvido por @JonasArcuri" << endl;
				sistemaCalculadora();
			}
			else 
			{
				cout << "Dados Informados Inválidos/Incorretos!" << endl;
				sistemaCalculadora();
			}
			
		break;
		
		case 2: 
			cout << "Informe o número que deseja Subtrair: " << endl;
			cin >> numeroInformado;
			cout << "Informe o segundo número: " << endl;
			cin >> numeroInformado2;
			resultado = numeroInformado - numeroInformado2;
			cout << numeroInformado << "-" << numeroInformado2 << " É igual a: " << resultado << endl;
			
			cout << "1 - Voltar ao Menu" << endl;
			cout << "2 - Créditos" << endl;
			cin >> resposta;
			
			if (resposta == 1)
			{
				sistemaCalculadora();
			}
			else if (resposta == 2)
			{
				cout << "Desenvolvido por @JonasArcuri" << endl;
				sistemaCalculadora();
			}
			else 
			{
				cout << "Dados Informados Inválidos/Incorretos!" << endl;
				sistemaCalculadora();
			}
			
		break;
		
		case 3:
			cout << "Informe o número que deseja Multiplicar: " << endl;
			cin >> numeroInformado;
			cout << "Informe o segundo número que irá ser Multiplicado:" << endl;
			cin >> numeroInformado2;
			resultado = numeroInformado * numeroInformado2;
			cout << numeroInformado << "x" << numeroInformado2 << " É igual á: " << resultado << endl;
			
			cout << "1 - Voltar ao Menu" << endl;
			cout << "2 - Créditos" << endl;
			cin >> resposta;
			
			if (resposta == 1)
			{
				sistemaCalculadora();
			}
			else if (resposta == 2)
			{
				cout << "Desenvolvido por @JonasArcuri" << endl;
				sistemaCalculadora();
			}
			else 
			{
				cout << "Dados Informados Inválidos/Incorretos!" << endl;
				sistemaCalculadora();
			}
			
		break;
		
		case 4:
			cout << "Informe o número a ser Dividido: " << endl;
			cin >> numeroInformado;
			cout << "Informe o segundo número que será dividido: " << endl;
			cin >> numeroInformado2;
			resultado = numeroInformado / numeroInformado2;
			cout << numeroInformado << " Dividido por " << numeroInformado2 << " É igual á: " << resultado << endl;
			
			cout << "1 - Voltar ao Menu" << endl;
			cout << "2 - Créditos" << endl;
			cin >> resposta;
			
			if (resposta == 1)
			{
				sistemaCalculadora();
			}
			else if (resposta == 2)
			{
				cout << "Desenvolvido por @JonasArcuri" << endl;
				sistemaCalculadora();
			}
			else 
			{
				cout << "Dados Informados Inválidos/Incorretos!" << endl;
				sistemaCalculadora();
			}
		break;
		
		default:
			cout << "Dados Digitados Inválidos, por favor Tente novamente!" << endl;
			sistemaCalculadora();
			break;
   }
}

int main() 
{
	sistemaCalculadora();
}
