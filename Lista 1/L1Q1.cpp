// Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. 
//Obs: Considere cada mês com 30 dias

#include <iostream>
using namespace std;

int main(){
	int idadeEmDias, dias, meses, anos;
	
	cout << "Quantos anos voce tem? ";
	cin >> anos;
	
	cout << "Quantos meses se passaram? ";
	cin >> meses;
	
	cout << "Quantos dias se passaram? ";
	cin >> dias;
	
	idadeEmDias = anos * 365 + meses * 30 + dias;
	
	cout << "A idade expressa em dias eh " << idadeEmDias;
	
	return 0;
	
}


