//Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e 
//escreva-os na ordem solicitada. 


#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3, maior, meio, menor;
	char letra;
	
	cout << "digite 3 numeros inteiros: ";
	cin >> num1 >> num2 >> num3;
	cout << "e uma ordem ('c' crescente ou 'd' decrescente): ";
	cin >> letra;
	
	if((num1 > num2)&&(num1 > num3)){
		maior = num1;
	}else{
		if((num2 > num1)&&(num2 > num3)){
			maior = num2;
		}else{
			maior = num3;
		}
	}
	
	if(((num1 > num2)&&(num1 < num3))||((num1 > num3)&&(num1 < num2))){
		meio = num1;
	}else{
		if(((num2 > num1)&&(num2 < num3))||((num2 > num3)&&(num2 < num1))){
			meio = num2;
		}else{
			meio = num3;
		}
	}
	
	if((num1 < num2)&&(num1 < num3)){
		menor = num1;
	}else{
		if((num2 < num1)&&(num2 < num3)){
			menor = num2;
		}else{
			menor = num3;
		}
	}
	
	switch(letra){
		case 'c': cout << "a ordem crescente seria: " << menor << meio << maior;
			break;
		case 'd': cout << "a ordem decrescente seria: " << maior << meio << menor;
			break;
		default: "letra invalida";
	}
	
	
	
	return 0;
}

