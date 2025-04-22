/* Elabore um algoritmo que leia todas as 
multas de n motoristas, calcule e escreva 
o total do débito de cada um.
*/

#include<iostream>
using namespace std;

int main(){
	float valor, total;
	int qtd, cont;
	char resp;
	
	cout << "quantos motoristas? ";
	cin >> qtd;
	
	for(cont = 1; cont <= qtd; cont++){
		cout << "esse motorista tem alguma multa? (s-sim/n-nao) ";
		cin >> resp;
		
		total = 0;
		while((resp == 's') || (resp == 'S')){
			cout << "digite o valor da multa: ";
			cin >> valor;
			total = total + valor;
			cout << "tem mais alguma multa? (s-sim/n-nao) ";
			cin >> resp;
		}
		cout << "valor da multa: " << total << endl;
	}
	
	return 0;
}
