/*

Elabore um algoritmo para ler um vetor A de 20 n�meros inteiros e obter a maior diferen�a entre dois 
elementos consecutivos desse vetor. Ao final, escreva a maior diferen�a e os �ndices dos respectivos 
elementos.

*/

#include<iostream>
using namespace std;

int main(){
	int vA[10], i;
	int maiorD = 0, diferenca = 0, valAnt, ind1, ind2;
	
	cout << "digite 20 elementos inteiros: ";
	for(i=0; i<10; i++){
		cin >> vA[i];
		
		if(i >= 1){
			diferenca = valAnt - vA[i];
			
			if (diferenca > maiorD) {
    			maiorD = diferenca;
    			ind1 = i - 1;
			    ind2 = i;
			}
		}
		
		valAnt = vA[i];
		
	}
	
	cout << "\na maior diferenca eh " << maiorD << ". " << endl;
	cout << "indices: " << ind1 << " " << ind2 << ". " << endl;
	
	
	return 0;
}
