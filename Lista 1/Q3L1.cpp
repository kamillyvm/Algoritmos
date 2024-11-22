#include <iostream>
using namespace std;

int main() {
	int qtdParcelas, Parcela;
	float valorCompra, valorPrestacoes; 	
		
	cout << "Qual o valor da compra?";
	cin >> valorCompra;
	
	cout << "Em quantas parcelas (ate 10)?";
	cin >> qtdParcelas;
	
	if(qtdParcelas == 1){
		Parcela = valorCompra;
		cout << "Sua compra em 1 parcela, ira custar " << valorCompra << endl;
	}else{
		valorPrestacoes = valorCompra / qtdParcelas;
		cout << "Sua compra em " << qtdParcelas << " parcelas, o valor das prestacoes eh " << valorPrestacoes << endl;
	}
	
	
	system ("pause");
    return 0;
}
