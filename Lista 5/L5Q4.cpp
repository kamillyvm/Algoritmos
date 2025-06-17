/*

Escreva um algoritmo que leia uma matriz A(15,5) e a escreva. Verifique, a seguir, quais os elementos de A 
que estão repetidos e quantas vezes cada um está repetido. Escrever cada elemento repetido com uma 
mensagem dizendo quantas vezes cada elemento aparece em A.

*/

#include<iostream>
using namespace std;

int main() {
    const int tamLin = 5, tamCol = 3, tamVet = tamLin * tamCol; //matriz(15,5)
    int A[tamLin][tamCol];
    int numRep[tamVet];
    int semRep[tamVet];
    int qtdSemRep = 0;
    int i, j, k = 0, contRep = 0;
	bool existe, temRep;
	
	
	cout << "digite 15 numeros: "; //75
	for(i = 0; i < tamLin; i++) {
        for(j = 0; j < tamCol; j++) {
            cin >> A[i][j];
            numRep[k++] = A[i][j];
        }
    }

    for(int i = 0; i < tamVet; i++) {
        existe = false;

        for(int j = 0; j < qtdSemRep; j++) {
            if(numRep[i] == semRep[j]) {
                existe = true;
            }
        }

        if(!existe) {
            semRep[qtdSemRep] = numRep[i];
            qtdSemRep++;
        }
    }

    //mostrar a matriz
    cout << "\nmatriz completa: " << endl;
    for(i = 0; i < tamLin; i++) {
        for(j = 0; j < tamCol; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    //verificar e mostrar elementos repetidos
    temRep = false;

    for(int c = 0; c < qtdSemRep; c++) {
        contRep = 0;

        for(i = 0; i < tamLin; i++) {
            for(j = 0; j < tamCol; j++) {
                if(semRep[c] == A[i][j]) {
                    contRep++;
                }
            }
        }

        if(contRep > 1) {
            cout << "\no numero " << semRep[c] << " se repetiu " << (contRep - 1) << " vezes";
            temRep = true;
        }
    }

    if(!temRep) {
        cout << "\nnao tem valor repetido na matriz.";
    }

    return 0;
}

