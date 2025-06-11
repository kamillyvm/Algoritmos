/*

Elabore um algoritmo que leia dois vetores, A (20 elementos inteiros) e B (20 elementos inteiros),
e escreva um terceiro vetor C contendo todos os elementos comuns aos dois vetores A e B.   

*/

#include <iostream>
using namespace std;

int main(){
    int vA[10], vB[10], vC[10], i, i2, cont; //20
    bool achou;
	
	cout << "digite 20 elementos do vetor A: ";
    for(i=0; i < 10; i++){
        cin >> vA[i];
    }
    
    cout << "digite 20 elementos do vetor B: ";
    for(i=0; i < 10; i++){
        cin >> vB[i];
    }
	
	cont = 0;
    for(i=0; i <10;i++){
        for(i2=0; i2<10; i2++){
            achou = false;

            if(vA[i] == vB[i2]){
                if(!achou){
                    vC[cont] = vA[i];
                    cont++;
                }
            }
        }
    }

    cout << "\nelementos em comum: ";
    for(i=0; i<cont; i++){
        cout << vC[i] << " ";
    }
    

    return 0;
}