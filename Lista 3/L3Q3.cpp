/*

Chico tem 1,50m e cresce 2 cent�metros por ano, enquanto Juca tem 1,10m e cresce 3 cent�metros por 
ano. Construir um algoritmo que calcule e imprima quantos anos ser�o necess�rios para que Juca seja 
maior que Chico. 

*/

#include<iostream>
using namespace std;

int main(){
	int cont = 0;
	float altChico = 1.50, altJuca = 1.10;
	
	while(altJuca <= altChico){
		altChico = altChico + 0.02;
		altJuca = altJuca + 0.03;
		cont++;
	}
	
	cout << cont << " anos ate Juca ser maior que Chico.";
	
	return 0;
}
