//Crie um programa que exibe se um dia é dia útil, fim de semana ou dia inválido dado o número referente 
//ao dia. Considere que domingo é o dia 1 e sábado é o dia 7.  

#include <iostream>
using namespace std;

int main(){
	int dia;
	
	cout << "digite o numero do dia, considerando '1' para domingo: ";
	cin >> dia;
	
	switch(dia){
		case 1: cout << "domingo" << endl;
			break;
		case 2: cout << "segunda" << endl;
			break;
		case 3: cout << "terca" << endl;
			break;
		case 4: cout << "quarta" << endl;
			break;
		case 5: cout << "quinta" << endl;
			break;
		case 6: cout << "sexta" << endl;
			break;
		case 7: cout << "sabado" << endl;
			break;			
		default: cout << "dia invalido" << endl;
			break;
	}
	
	if((dia==2)||(dia==3)||(dia==4)||(dia==5)||(dia==6)){
			cout << "o dia eh util" << endl;
		}else{
			if((dia==1)||(dia==7)){
				cout << "eh um fim de semana" << endl;
			}
		}
	
	
	return 0;
}

