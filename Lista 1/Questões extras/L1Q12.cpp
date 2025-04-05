//Leia dois números inteiros quaisquer e escreva a soma entre os três sucessores do primeiro e os 
//dois antecessores do segundo.

#include <iostream>
using namespace std;

int main(){
	int num1, num2, sucessor, antecessor, somaTotal;
	
	cout << "digite dois numeros inteiros qualquer: ";
	cin >> num1 >> num2;
	
	sucessor = (num1 + 1) + (num1 + 2) + (num1 + 3);
	antecessor = (num2 - 1) + (num2 - 2);
	
	somaTotal = sucessor + antecessor;
	
	cout << "a soma dos tres sucessores do primeiro numero e dos dois antecessores do segundo numero eh: " << somaTotal << endl;
	
	return 0;
}

