/*

Elabore um algoritmo que mostre o calend�rio de um determinado m�s. Os dados de entrada s�o o m�s 
(cujos dados devem ser mostrados) e o dia da semana em que esse m�s inicia. Assuma que esse m�s est� 
em um ano que n�o � bissexto, por�m considere meses de 28, 30 e 31. O resultado deve ser como 
mostrado abaixo. Ex: janeiro, come�ando na 5a feira: 

*/


#include<iostream>
using namespace std;

int main(){
	int mes, diaInicial, diaFinal, cont;
	
	cout << "digite o mes que deseja ver o calendario (1 a 12): ";
	cin >> mes;
	cout << "digite o dia que inicia o mes (1 a 7): ";
	cin >> diaInicial;
	
	
	if((mes == 1) || (mes == 3) || (mes == 5) ||
		(mes == 7) || (mes == 8) || (mes == 10) ||
		(mes == 12)){
			
		}else{
			if((mes == 4) || (mes == 6) || (mes == 9) ||
			(mes == 11)){
				
			}else{
				if(mes == 2){
					
				}
			}
		}
	
	
	
	return 0;
}
