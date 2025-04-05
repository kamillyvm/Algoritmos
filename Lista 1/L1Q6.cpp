#include <iostream>
using namespace std;

int main(){
	float custoFabrica, custoConsumidor, Distribuidor = 28/100.0, Impostos = 45/100.0;
	
	cout << "digite o custo de fabrica do carro: ";
	cin >> custoFabrica;
	
	custoConsumidor = custoFabrica + (custoFabrica * Distribuidor) + (custoFabrica * Impostos);
	
	cout << "o custo ao consumidor eh: "<< custoConsumidor << endl;
	
	
	
	return 0;
}
