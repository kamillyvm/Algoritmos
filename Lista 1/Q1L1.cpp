// Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. 
//Obs: Considere cada mês com 30 dias

#include <iostream>
using namespace std;

int main(){
	int IdadeEmDias, Dias, Meses, Anos;
	
	cout << "Quantos anos voce tem? ";
	cin >> Anos;
	
	cout << "Quantos meses se passaram? ";
	cin >> Meses;
	
	cout << "Quantos dias se passaram? ";
	cin >> Dias;
	
	IdadeEmDias = Anos * 365 + Meses * 30 + Dias;
	
	cout << "A idade expressa em dias eh " << IdadeEmDias;
	
	return 0;
	
}


