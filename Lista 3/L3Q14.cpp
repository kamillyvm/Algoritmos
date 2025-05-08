/*

Elabore um algoritmo que apresente um menu contendo as opções 1-Triângulo, 2-Quadrado, 
3Retângulo, 4-Trapézio, 5-Círculo, 6-Sair. Em seguida, de acordo com a opção escolhida pelo usuário, o 
algoritmo deve solicitar as informações necessárias para cálculo da área, efetuar o cálculo e escrever o 
resultado. O algoritmo só deverá finalizar quando o usuário escolher a opção 6-Sair.

*/

#include<iostream>
using namespace std;

int main(){
	int opc;
	float area, base, altura, lado, baseMaior, baseMenor, raio;
	char escolha;
	bool sair = false;
	
	
	do{
		cout << "-------------------" << endl;
		cout << "\tMENU" << endl;
		cout << "-------------------" << endl;
		cout << "1-Triangulo" << endl;
		cout << "2-Quadrado" << endl;
		cout << "3-Retangulo" << endl;
		cout << "4-Trapezio" << endl;
		cout << "5-Circulo" << endl;
		cout << "6-Sair" << endl;
		cout << "-------------------" << endl;
		cout << "\no que deseja ver? ";
		cin >> opc;
		
		area = 0;
		base = 0;
		altura = 0;
		lado = 0;
		baseMaior = 0;
		baseMenor = 0;
		raio = 0;
		
		switch(opc){
			case 1:
				
				cout << "\ndigite a base: ";
				cin >> base;
				cout << "digite a altura: ";
				cin >> altura;
				
				area = (base * altura)/2;
				
				cout << "\nresultado: " << area;
				
				break;
			case 2:
				
				cout << "\ndigite o lado: ";
				cin >> lado;
				
				area = lado * lado;
				
				cout << "\nresultado: " << area;
				
				break;
			case 3:
				
				cout << "\ndigite a base: ";
				cin >> base;
				cout << "\ndigite a altura: ";
				cin >> altura;
				
				area = base * altura;
				
				cout << "\nresultado: " << area;
				
				break;
			case 4:
				
				cout << "\ndigite a base maior: ";
				cin >> baseMaior;
				cout << "\ndigite a base menor: ";
				cin >> baseMenor;
				cout << "\ndigite a altura: ";
				cin >> altura;
				
				area = ((baseMaior + baseMenor) * altura)/2;
				
				cout << "\nresultado: " << area;
				
				break;
			case 5:
				
				cout << "\ndigite o raio: ";
				cin >> raio;
				
				area = 3.14 * (raio * raio);
				
				cout << "\nresultado: " << area;
				
				break;
			case 6:
				sair = true;
				break;
			default: cout << "\nopcao invalida. ";
				
		}
		cout << "\ndeseja fazer mais algum calculo (s - sim ou n - nao)? ";
		cin >> escolha;
		
		if(escolha == 'n') {
    		sair = true;
		}
		
	}while((escolha == 's') || (sair == false));
	
	return 0;
}
