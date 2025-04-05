//Elabore um algoritmo em C++ que leia um número e diga o máximo de deduções sobre ele.

#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout << "digite um numero para deduzir: ";
	cin >> num;
	
	if(num%2 == 0){
		cout << "ele eh par\n";
	}else{
		cout << "ele eh impar\n";
	}
	
	if(num > 1 && num/num){
		cout << "o numero eh primo\n" ;
	}else{
		cout << "o numero nao eh primo\n";
	}
	
	if(num >= 0){
		cout << "pertence ao conjunto de numeros naturais\n";
	} else {
		cout << "nao pertence ao conjunto de numeros naturais\n";
	}
	
	if(num < 0){
		cout << "eh um numero negativo\n";
	}else{
		cout << "eh um numero positivo\n";
	}

	if(num < 0 || num >= 0)
		cout << "pertence ao conjunto de numeros inteiros\n";

	if(100 * num / 100 )
		cout << "pertence ao conjunto de numeros racionais\n";

	
	return 0;
}
