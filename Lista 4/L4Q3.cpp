/*

Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais 
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em 
índices ímpares. Mostre somente os elementos solicitados.    

*/

#include<iostream>
using namespace std;

int main(){
	int v[15], n;
	char escolha;
	
	cout << "digite 15 numeros inteiros: ";
	for(n=0; n<15; n++){
		cin >> v[n];
	}
	
	cout << "\nqual elemento deseja ver? (i-indice impar, p-indice par): ";
	cin >> escolha;
	
	if(escolha == 'p'){
		for(n=0; n<15; n+=2){
			cout << v[n] << " ";
		}
	}else{
		if(escolha == 'i'){
			for(n=1; n<15; n+=2){
				cout << v[n] << " ";
			}
		}else{
			cout << "\nescolha invalida";
		}
	}
	
	
	
	return 0;
}
