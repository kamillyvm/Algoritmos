/*

Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de inteiros. Conte quantos valores 
da matriz M são iguais a A. Crie, a seguir, uma matriz X contendo todos os elementos de M diferentes de A 
(quando for igual a A, insira um 0). Mostre os resultados.

*/
#include <iostream>
using namespace std;

int main() {
    int nA, cont;
    int m[5][5], i, j; //matriz 30x30
    int x[5][5]; //matriz x 30x30
    
    cout << "digite numeros inteiros de uma matriz(30)(30): ";
    for(i=0; i<5; i++){
    	for(j=0; j<5; j++){
    		cin >> m[i][j];
		}
	}
	
	cout << "\ndigite um numero inteiro A: ";
	cin >> nA;
    
    cont = 0;
    for(i=0; i<5; i++){
    	for(j=0; j<5; j++){
    		if(m[i][j] == nA){
    			x[i][j] = 0;
    			cont++;
			}else{
				x[i][j] = m[i][j];
			}
		}
	}
	
	cout << "\nexiste " << cont << " numeros iguais a A." << endl;
	cout << "todos os numeros iguais recebem 0: " << endl;
	cout << "\n";
	for(i=0; i<5; i++){
    	for(j=0; j<5; j++){
    		cout << x[i][j] << " ";
		}
		cout << endl;
	}
    
    
	return 0;
}
