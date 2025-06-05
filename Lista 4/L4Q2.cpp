/*

Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores 
pares existem no vetor e troque cada um desses elementos por 0.  Em seguida escreva o vetor final.  

*/

#include<iostream>
using namespace std;

int main(){
	int cont;
	int v[8], i; //apenas 8, para teste
	
	cont = 0;
	cout << "digite 20 elementos inteiros: ";
	for(i=0; i<8; i++){
		cin >> v[i];
	
		if(v[i] %2==0){
			cont++;
			v[i] = 0;
		}
	
	}
	
	cout << "\ntem " << cont << " elementos pares." << endl;
	
	cout << "\ntodos os elementos pares sao trocados por 0: ";
	for(i=0; i<8; i++){
		cout << v[i] << " ";
	}
	
	
	
	return 0;
}
