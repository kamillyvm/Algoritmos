/*

Em um jogo de adivinha��o, o jogador deve descobrir um n�mero entre 1 e 10 usando at� tr�s tentativas. 
A cada tentativa o jogador � informado se o n�mero foi descoberto, se ele � maior ou menor do que a 
tentativa. Se ap�s tr�s tentativas o jogador n�o descobrir o n�mero, ent�o ele perde o jogo. Fa�a um 
algoritmo que implemente esse jogo, considerando que o n�mero a ser descoberto ser� definido dentro 
do algoritmo e n�o estar� vis�vel para o usu�rio.

*/

#include <iostream>
using namespace std;

int main(){
	int tentativa, num, adivinha = 7;
	bool acertou = false;
	
	tentativa = 1;
	do{
		cout << "\ndescubra um numero de 1 ate 10 (voce tem apenas 3 tentativas): ";
		cin >> num;
		
		if(num == adivinha){
			acertou = true;
		}else{
			if(num > adivinha){
				cout << "\nainda nao eh esse, o numero eh menor que esse. " << endl;
			}else{
				if(num < adivinha){
					cout << "\nainda nao eh esse, o numero eh maior que esse. " << endl;
				}
			}
		}
		
		tentativa++;
		
	}while((tentativa <= 3)&&(acertou == false));
	
	if(!acertou){
		cout << "\ninfelizmente nao foi dessa vez. quem sabe na proxima. " << endl;
		cout << "o numero a ser descoberto era " << adivinha << endl;
	}else{
		cout << "\nvoce acertou! parabens!" << endl;
	}
	
	return 0;
}
