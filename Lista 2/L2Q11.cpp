// Elabore um algoritmo que leia um n�mero inteiro maior do que zero (m�ximo de 5 algarismos), verifique 
//e escreva a soma de todos os seus algarismos. Por exemplo, para o n�mero 251 a soma ser� 8 (2 + 5 + 
//1). Se o n�mero lido n�o for maior do que zero, o programa terminar com a mensagem �N�mero 
//inv�lido�.

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

