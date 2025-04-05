#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout << "digite o numero para saber o mes: ";
	cin >> num;
	
	switch(num){
		case 1: cout << "janeiro";
			break;
		case 2: cout << "fevereiro";
			break;	
		case 3: cout << "março";
			break;
		case 4: cout << "abril";
			break;
		case 5: cout << "maio";
			break;	
		case 6: cout << "junho";
			break;
		case 7: cout << "julho";
			break;
		case 8: cout << "agosto";
			break;	
		case 9: cout << "setembro";
			break;
		case 10: cout << "outubro";
			break;
		case 11: cout << "novembro";
			break;	
		case 12: cout << "dezembro";
			break;
		
		default: cout << "numero invalido";
	}
	
	return 0;
}

