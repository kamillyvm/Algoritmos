/*

Elabore um algoritmo que implemente uma calculadora real: o usuário digita um número, depois a 
operação (+, -, *, /), outro número, outra operação, outro número, e assim continua até que ele digite 
enfim o sinal “=”, quando então a calculadora mostra o resultado. Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 + 
4 = 6. O algoritmo deve resolver a expressão na ordem de digitação.

*/

#include<iostream>
using namespace std;

int main(){
	int cont;
	float num, resultado;
	char operador;
	
	resultado = 0;
	do{
		
		cout << "\ndigite um numero o que deseja calcular: ";
		cin >> num;
		
		switch(operador){
			case '+':
				resultado = resultado + num;
				break;	
			case '-':
				resultado = resultado - num;
				break;
			case '*':
				resultado = resultado * num;
				break;
			case '/':
				resultado = resultado / num;
		}
		
		cout << "\ndigite o operador que deseja ( '+ , - , * , /' ou finalizar com '=' ): ";
		cin >> operador;
		
		
		if((operador != '+') && (operador != '-') &&
			(operador != '*') && (operador != '/') &&
			(operador != '=')){
				cout << "\noperador invalido" << endl;
			
		}
		
		if (cont == 0){
			resultado = num;
		}
		
		cont++;
		
	}while(operador != '=');
	
	
	cout << "\nresultado: " << resultado;
	
	return 0;
}
