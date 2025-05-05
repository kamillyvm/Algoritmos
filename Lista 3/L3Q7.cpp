/*

Elabore um algoritmo que implemente uma calculadora real: o usu�rio digita um n�mero, depois a 
opera��o (+, -, *, /), outro n�mero, outra opera��o, outro n�mero, e assim continua at� que ele digite 
enfim o sinal �=�, quando ent�o a calculadora mostra o resultado. Exemplos: 1 + 3 � 2 / 2 = 1; 4 � 2 / 1 + 
4 = 6. O algoritmo deve resolver a express�o na ordem de digita��o.

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
