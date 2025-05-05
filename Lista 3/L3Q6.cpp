/*

Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas. 
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a 
tentativa. Se após três tentativas o jogador não descobrir o número, então ele perde o jogo. Faça um 
algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro 
do algoritmo e não estará visível para o usuário.

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
