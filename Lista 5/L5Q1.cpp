/*

Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e
multiplique a matriz M pelo valor A  inserindo os resultados em um vetor
de V(36). Ao final, escreva o vetor V.

*/
#include <iostream>
using namespace std;

int main() {
    int m[3][3], v[9];
    int i, j, A, cont;
    
    cout << "digite 36 valores de uma matriz (6,6): ";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin >> m[i][j];
        }
    }
    
    //mostrar a matriz
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "digite um valor inteiro para multiplicar: ";
    cin >> A;
    
    cont = 0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            v[cont] = m[i][j] * A;
            cont++;
        }
    }
    
    cout << "resultado: ";
    for(i=0; i<9; i++){
        cout << v[i] << " ";
    }
    
    
	return 0;
}
