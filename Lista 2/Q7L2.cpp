#include <iostream>
using namespace std;

int main(){
	int codbebida, codsandu, qtdsandu, qtdbebida;
	float valor = 0;
	
	cout << "digite o codigo do sanduiche que deseja pedir: ";
	cin >> codsandu;
	cout << "digite o codigo da bebida que deseja pedir: ";
	cin >> codbebida;
	cout << "quantos sanduiches deseja? ";
	cin >> qtdsandu;
	cout << "quantas bebidas deseja? ";
	cin >> qtdbebida;
	
	switch(codsandu){
		case 100:
		case 103:
			 valor += 1.10 * qtdsandu;
			 break;
		case 101:
		case 104:
			valor += + 1.30 * qtdsandu;
			break;
		case 102:
			valor += 1.50 * qtdsandu;
			break;
			
		default: cout << "codigo invalido" << endl;
	}
	
	switch(codbebida){
		case 105:
			valor += 1.00 * qtdbebida;
			break;
		case 106:
			valor += 2.00 * qtdbebida;
			break;
		case 107:
			valor += 1.50 * qtdbebida;
			break;
		
		default: cout << "codigo invalido" << endl;
	}
	
	cout << "o valor total a ser pago eh: " << valor << endl;
	
	
	
	
	return 0;
}
