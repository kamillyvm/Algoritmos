#include<iostream>
using namespace std;

//dei exemplo com 4 números, mas eh para um vetor de 20 números.
int main(){
	int v[4], i, fator, soma = 0;
	
	
	cout << "\ndigite quatro numeros: ";
	for(i=0; i<4; i++){
		cin >> v[i];
	}
	for(i=3; i>=0; i--){
		cout << v[i] << " ";
	}
	
	cout << "\ndigite um numero para multiplicar os valores com ele: ";
	cin >> fator;
	
	for(i=0; i<4; i++){
		v[i] = v[i] * fator;
	}
	for(i=0; i<4; i++){
		cout << v[i] << " ";
	}
	
	for(i=0; i<4; i++){
		soma = soma + v[i];
	}
	
	cout << "\nsoma de todos os valores: " << soma;
	
	return 0;
}
