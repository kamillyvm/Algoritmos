/*

Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo 
vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e 
assim sucessivamente.  Ao final, escreva os vetores A e B.   

*/

#include<iostream>
using namespace std;

int main(){
	int vA[20], vB[20];
	int i, i2=19;
	
	cout << "digite 20 numeros inteiros: ";
	for(i=0; i<20; i++){
		cin >> vA[i];
		vB[i2] = vA[i];
		i2--;
	}
	
	cout << "\nelementos do vetor A: ";
	for(i=0; i<20; i++){
		cout << vA[i] << " ";
	}
	
	cout << "\nelementos do vetor B: ";
	for(i=0; i<20; i++){
		cout << vB[i] << " ";
	}
	
	
	return 0;
}
