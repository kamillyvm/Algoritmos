/*

Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a 
aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada um dos N 
motoristas:  
- O número da carteira de motorista (inteiro);  
- Número de multas;  
- O valor de cada uma das multas.  
Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados 
(somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do motorista 
que obteve o maior número de multas.
 
*/

#include <iostream>
using namespace std;

int main(){
	int cont, cont2, motoristas = 0, carteira, multas, maiorMultas, carteiraMaisMultas;
	float valorMultas, valor, total; 
	
	cout << "quantos motoristas sao? ";
	cin >> motoristas;
	
	carteira = 0;
	multas = 0;
	total = 0;
	maiorMultas = 0;
	
	for(cont = 1; cont <= motoristas; cont++){
		cout << "\ndigite o numero da carteira: ";
		cin >> carteira;
		cout << "digite o numero de multas: ";
		cin >> multas;
		
		
		valorMultas = 0;
		cout << "digite o valor de cada multa: ";
		for(cont2 = 1; cont2 <= multas; cont2++){
			cin >> valor;
			valorMultas = valorMultas + valor;
		}
		
		if(multas > maiorMultas){
			maiorMultas = multas;
			carteiraMaisMultas = carteira;
		}
		
		total = total + valorMultas;
		cout << "o valor da divida eh: R$ " << valorMultas << endl;

		
	}
	
	cout << "\ntotal de recursos arrecadados: R$ " << total << endl;
	cout << "\no motorista " << carteiraMaisMultas << " teve o maior numero de multas." << endl;
	
	return 0;
}
