/*

Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de c�digo. Se o 
c�digo for 1, mostrar o vetor na ordem direta (do primeiro at� o �ltimo), se o c�digo for 2, mostrar o vetor 
na ordem inversa (do �ltimo at� o primeiro).

*/

#include<iostream>
using namespace std;

int main(){
	int cod, i;
	int v[8]; //apenas 8, s� para teste
	
	cout << "digite 20 elementos inteiros: ";
	for(i=0; i<8; i++){
		cin >> v[i];
	}
	
	cout << "\ndigite o codigo (1-ordem direta, 2-ordem inversa): ";
	cin >> cod;
	
	switch(cod){
		case 1:
			
			for(i=0; i<8; i++){
				cout << v[i] << " ";
			}
			
			break;
		case 2:
			
			for(i=7; i>=0; i--){
				cout << v[i] << " ";
			}
			
			break;
		default: cout << "\ncodigo invalido.";
	}
	
	return 0;
}
