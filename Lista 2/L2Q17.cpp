// Leia um n�mero qualquer e verifique se ele � par ou �mpar. Se o n�mero for par, escreva se � m�ltiplo 
//de 10; se for �mpar, escreva se � divis�vel por 5. 

#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout << "digite um numero: ";
	cin >> num;
	
	if(num % 2 == 0){
		cout << "o numero eh par" << endl;
		
		if(num % 10 == 0){
			cout << "o numero eh multiplo de 10";
		}
		
	}else{
		cout << "o numero eh impar" << endl;
		
		if(num % 5 == 0){
			cout << "o numero eh divisivel por 5";
		}
		
	}
	
	return 0;
}

