#include <iostream>
using namespace std;

int main(){
	int numI, soma, cent, dez, unid;
	
	cout << "digite um numero inteiro maior que zero (maximo 3): ";
	cin >> numI;
	
	if(numI < 0){
		cout << "numero invalido";
	}else{
		cent = numI / 100;
		dez = (numI % 100)/10;
		unid = (numI % 100)%10;
		soma = cent + dez + unid;
		
		cout << "a soma entre os numeros sao: " << soma;
	}
	
	
	
	return 0;
}
