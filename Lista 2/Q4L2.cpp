#include <iostream>
using namespace std;

int main(){
	int ano;
	float preco, imposto;
	
	cout << "digite o ano: " << endl;
	cin >> ano;
	
	cout << "digite o preco do carro: " << endl;
	cin >> preco;
	
	if(ano < 1990){
		imposto = preco * 0.01;
	}else{
		imposto = preco * 0.015;
	}
	
	cout << "o imposto a ser pago eh: " << imposto << endl;
	
	
	return 0;
}
