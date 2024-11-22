#include <iostream>
using namespace std;

int main(){
	float compra, parcelas;
	int qtdParcelas;
	
	cout << "digite o valor total da compra: ";
	cin >> compra;
	cout << "digite o valor da parcela: ";
	cin >> parcelas;
	cout << "em quantas parcelas? ";
	cin >> qtdParcelas;
	
	if((compra / qtdParcelas) < parcelas){
		cout << "sua compra veio com juros";
	}else{
		if((compra / qtdParcelas) > parcelas){
			cout << "sua compra veio com desconto";
		}else{
			cout << "sua compra veio sem juros";
		}
	}
	
	
	
	
	return 0;
}
