//Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e 
//mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada.  

#include <iostream>
using namespace std;

int main(){
	int num, soma;
	char letra;
	
	cout << "digite um numero desejado: ";
	cin >>num;
	cout << "digite uma letra 'a' para antecessor ou 's' para sucessor: ";
	cin >> letra;
	
	if(letra == 'a'){
		soma = (num-1) + (num-2) + (num-3) + (num-4) + (num-5)
		+ (num-6) + (num-7) + (num-8) + (num-9) + (num-10);
		cout << "os numeros antecessores de " << num << " eh: " << soma << endl;
	}else{
		if(letra == 's'){
			soma = (num+1) + (num+2) + (num+3) + (num+4) + (num+5)
		+ (num+6) + (num+7) + (num+8) + (num+9) + (num+10);
		cout << "os numeros sucessores de " << num << " eh: " << soma << endl;
		}else{
			cout << "letra invalida";
		}
	}
	
	system("pause");
	
	
	
	return 0;
}

