#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>

using namespace std;

void sistemaCalculadora() {
	
	//Infos

	setlocale(LC_ALL,""); //Altera��o para Localiza��o atual
	
	cout << "Bem vindo a C�lculadora em C++" << endl;
	
	//Vari�veis
	
	int selecionarOpcao, numeroInformado, numeroInformado2, resultado, opcaoSelecionada, resposta;
	// Programa
	
	cout << "Digite uma op��o abaixo para realizar uma opera��o" << endl;
	cout << "1 - Adi��o" << endl;
	cout << "2 - Subtra��o" << endl;
	cout << "3 - Multiplica��o" << endl;
	cout << "4 - Divis�o" << endl;
	
	cin >> selecionarOpcao;
	
	switch (selecionarOpcao) {
		case 1: 
			int opcaoSelecionada;
			cout << "Informe o primeiro n�mero: " << endl;
			cin >> numeroInformado;
			cout << "Informe o segundo n�mero para adi��o: " << endl;
			cin >> numeroInformado2;
			resultado = numeroInformado + numeroInformado2;
			cout << numeroInformado << "+" << numeroInformado2 << " � igual a: " << resultado << endl;
			
			cout << "1 - Voltar ao Menu" << endl;
			cout << "2 - Cr�ditos" << endl;
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
				cout << "Dados Informados Inv�lidos/Incorretos!" << endl;
				sistemaCalculadora();
			}
			
		break;
		
		case 2: 
			cout << "Informe o n�mero que deseja Subtrair: " << endl;
			cin >> numeroInformado;
			cout << "Informe o segundo n�mero: " << endl;
			cin >> numeroInformado2;
			resultado = numeroInformado - numeroInformado2;
			cout << numeroInformado << "-" << numeroInformado2 << " � igual a: " << resultado << endl;
			
			cout << "1 - Voltar ao Menu" << endl;
			cout << "2 - Cr�ditos" << endl;
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
				cout << "Dados Informados Inv�lidos/Incorretos!" << endl;
				sistemaCalculadora();
			}
			
		break;
		
		case 3:
			cout << "Informe o n�mero que deseja Multiplicar: " << endl;
			cin >> numeroInformado;
			cout << "Informe o segundo n�mero que ir� ser Multiplicado:" << endl;
			cin >> numeroInformado2;
			resultado = numeroInformado * numeroInformado2;
			cout << numeroInformado << "x" << numeroInformado2 << " � igual �: " << resultado << endl;
			
			cout << "1 - Voltar ao Menu" << endl;
			cout << "2 - Cr�ditos" << endl;
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
				cout << "Dados Informados Inv�lidos/Incorretos!" << endl;
				sistemaCalculadora();
			}
			
		break;
		
		case 4:
			cout << "Informe o n�mero a ser Dividido: " << endl;
			cin >> numeroInformado;
			cout << "Informe o segundo n�mero que ser� dividido: " << endl;
			cin >> numeroInformado2;
			resultado = numeroInformado / numeroInformado2;
			cout << numeroInformado << " Dividido por " << numeroInformado2 << " � igual �: " << resultado << endl;
			
			cout << "1 - Voltar ao Menu" << endl;
			cout << "2 - Cr�ditos" << endl;
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
				cout << "Dados Informados Inv�lidos/Incorretos!" << endl;
				sistemaCalculadora();
			}
		break;
		
		default:
			cout << "Dados Digitados Inv�lidos, por favor Tente novamente!" << endl;
			sistemaCalculadora();
			break;
   }
}

int main() 
{
	sistemaCalculadora();
}
