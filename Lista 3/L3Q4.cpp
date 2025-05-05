/*

Dado um n�mero n inteiro e positivo, dizemos que n � perfeito se n for igual � soma de seus divisores 
positivos diferentes de n. Construa um programa em C++ que verifica se um dado n�mero � perfeito. Ex: 6 
� perfeito, pois 1+2+3 = 6.

*/

#include<iostream>
using namespace std;

int main(){
	int num, soma = 0, cont;
	
	cout << "digite um numero inteiro e positivo: ";
	cin >> num;
	
	if(num > 0){
		for(cont = 1; cont < num; cont++){
			if(num % cont == 0){
				soma = soma + cont;
			}
		}
		
		if(num == soma){
			cout << "o numero eh perfeito.";	
		}else{
			cout << "o numero nao eh perfeito.";
		}
		
	}else{
		cout << "numero invalido.";
	}
	
	return 0;
}
