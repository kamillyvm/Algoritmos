/*

Elabore um algoritmo que leia um vetor A de 20 posi��es. Em seguida, trocar o primeiro elemento com o 
�ltimo, o segundo com o pen�ltimo, o terceiro com o antepen�ltimo, e assim sucessivamente.  Ao final, 
escreva o vetor A modificado.

*/

#include<iostream>
using namespace std;

int main(){
	int vA[20];
	int i, aux;
	
	
	cout << "digite 20 elementos inteiros: ";
	for(i=0;  i<20; i++){
		cin >> vA[i];
	}
	
	for(i=0;  i<10; i++){
		aux = vA[i];
		vA[i] = vA[19-i];
		vA[19-i] = aux;
	}
	
	cout << "vetor modificado: ";
	for(i=0;  i<20; i++){
		cout << vA[i] << " ";
	}
	
	
	return 0;
}
