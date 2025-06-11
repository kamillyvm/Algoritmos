/*

Elabore um algoritmo que leia dois vetores V1 e V2 de 10 posições
cada e faça a multiplicação dos elementos de mesmo índice, colocando
o resultado em um terceiro vetor V3. Mostre o vetor resultante.

*/

#include <iostream>
using namespace std;

int main(){
    int v1[10], v2[10], v3[10];
    int i;
    
    cout << "10 elementos cada: " << endl;
    for(i=0; i<10; i++){
    	cout << "digite o primeiro elemento para multiplicar: ";
        cin >> v1[i];
        cout << "digite o segundo elemento para multiplicar: ";
	cin >> v2[i];
        
        v3[i] = v1[i]*v2[i];
        
    }
    
    cout << "\nreultado: ";
    for(i=0; i<10; i++){
        cout << v3[i] << " ";
    }

    return 0;
}
