/*

Elabore um algoritmo que leia um vetor de 15 posi��es de n�meros inteiros e pergunte ao usu�rio quais 
elementos ele deseja ver: se os elementos que est�o em �ndices pares ou se os elementos que est�o em 
�ndices �mpares. Mostre somente os elementos solicitados.    

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
