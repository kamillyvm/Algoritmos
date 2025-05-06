/*

Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva 
uma tabela de resultados (formatada com linhas verticais e horizontais). A tabela deverá conter cada 
valor lido em uma coluna, seu quadrado (na segunda linha) e seu cubo (na terceira linha). Finalizar a 
entrada de dados quando os 4 valores digitados forem iguais a zero. Se for digitado algum número 
negativo, solicitar que o usuário digite novamente até que o número seja positivo.

*/


#include<iostream>
using namespace std;

int main(){
	int n1, n2, n3, n4;
	
	cout << "digite um conjunto de 4 valores: ";
	
	do{
		do{
			cin >> n1;
			if(n1 < 0){
				cout << "\ntente novamente." << endl;
			}
		}while(n1 < 0);
		
		do{
			cin >> n2;
			if(n2 < 0){
				cout << "\ntente novamente." << endl;
			}
		}while(n2 < 0);
		
		do{
			cin >> n3;
			if(n3 < 0){
				cout << "\ntente novamente." << endl;
			}
		}while(n3 < 0);
		
		do{
			cin >> n4;
			if(n4 < 0){
				cout << "\ntente novamente." << endl;
			}
		}while(n4 < 0);
		
		if((n1 != 0) || (n2 != 0) || (n3 != 0) || (n4 != 0)){
			cout << n1 << "\t" << n2 << "\t" << n3 << "\t" << n4 << endl;
			cout << n1*n1 << "\t" << n2*n2 << "\t" << n3*n3 << "\t" << n4*n4 << endl;
			cout << n1*n1*n1 << "\t" << n2*n2*n2 << "\t" << n3*n3*n3 << "\t"  << n4*n4*n4 << endl;
		}
		
	}while((n1 != 0) || (n2 != 0) || (n3 != 0) || (n4 != 0));
	
	return 0;
}
