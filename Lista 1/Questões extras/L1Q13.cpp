//Leia os valores dos lados de um ret�ngulo, calcule e escreva sua �rea.

#include <iostream>
using namespace std;

int main(){
	float area, base, altura;
	
	cout << "qual o valor da base do retangulo? ";
	cin >> base;
	cout << "qual o valor da altura do triangulo? ";
	cin >> altura;
	
	area = base * altura;
	
	cout << "o valor da area do retangulo eh: " << area;
	
	
	return 0;
}

