/*

Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo, escreva essas somas e a matriz.  
a) da linha 4 de M  
b) da coluna 2 de M  
c) da diagonal principal  
d) da diagonal secundária  
e) de todos os elementos da matriz M

*/
#include <iostream>
using namespace std;

int main() {
    int m[5][5], i, j;
    int somaA = 0, somaB = 0, somaC = 0, somaD = 0, somaE = 0;
    
    cout << "digite numeros em uma matriz(5)(5): ";
    for(i=0; i<5; i++){
    	for(j=0; j<5; j++){
    		cin >> m[i][j];
    		
    		if(i==4){
    			somaA = somaA + m[i][j];
			}
			if(j==2){
    			somaB = somaB + m[i][j];
			}
			if(i==j){
    			somaC = somaC + m[i][j];
			}
			if(i+j==4){
    			somaD = somaD + m[i][j];
			}
			
			somaE = somaE + m[i][j];
		}
	}
	
	cout << "\na soma da linha 4 da matriz: " << somaA;
	cout << "\na soma da coluna 2 da matriz: " << somaB;
	cout << "\na soma da diagonal principal da matriz: " << somaC;
	cout << "\na soma da diagonal secundaria da matriz: " << somaD;
	cout << "\na soma de todos os elementos da matriz: " << somaE;
	
    
	return 0;
}
