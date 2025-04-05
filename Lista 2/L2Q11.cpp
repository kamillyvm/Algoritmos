// Elabore um algoritmo que leia um número inteiro maior do que zero (máximo de 5 algarismos), verifique 
//e escreva a soma de todos os seus algarismos. Por exemplo, para o número 251 a soma será 8 (2 + 5 + 
//1). Se o número lido não for maior do que zero, o programa terminar com a mensagem “Número 
//inválido”.

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

