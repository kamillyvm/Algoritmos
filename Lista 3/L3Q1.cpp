/*

Elabore um algoritmo que leia o código (inteiro) e
a idade de 100 pessoas e escreva ao final o código da 
pessoa mais velha e a idade da pessoa mais nova.
 
*/

#include <iostream>
using namespace std;

int main(){
	int cod, idade, cont, iMaisVelha, codMaior, iMaisNova;
	
	iMaisVelha = -1;
	iMaisNova = 999;
	//exemplo com 4 pessoas
	for(cont = 0; cont < 4; cont++){
		cout << "digite o codigo e a idade: " << endl;
		cin >> cod >> idade;
		
		if(idade > iMaisVelha){
			iMaisVelha = idade;
			codMaior = cod;
		}
		
		if(idade < iMaisNova){
			iMaisNova = idade;
		}
	}
	
	cout << "o codigo da pessoa mais velha eh " << codMaior << " e a idade da pessoa mais nova eh " << iMaisNova << endl;
	
	return 0;
}
