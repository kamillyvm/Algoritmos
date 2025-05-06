/*

Elabore um algoritmo que mostre o calendário de um determinado mês. Os dados de entrada são o mês 
(cujos dados devem ser mostrados) e o dia da semana em que esse mês inicia. Assuma que esse mês está 
em um ano que não é bissexto, porém considere meses de 28, 30 e 31. O resultado deve ser como 
mostrado abaixo. Ex: janeiro, começando na 5a feira: 

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
