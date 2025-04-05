//Dados tr�s valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um 
//tri�ngulo e, se forem, verificar e escrever se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles 
//n�o formarem um tri�ngulo, escrever esta mensagem. Considere as seguintes propriedades:   
//� O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;   
//� Equil�teros: tem os comprimentos dos tr�s lados iguais;   
//� Is�sceles: tem os comprimentos de dois lados iguais;  �  Escaleno: tem os comprimentos dos tr�s 
//lados diferentes.  

#include <iostream>
using namespace std;

int main(){
	float X, Y, Z;
	
	cout << "para um triangulo, escreva tres valores para os tres lados: ";
	cin >> X >> Y >> Z;
	
	
	if(X + Y > Z && X + Z > Y && Y + Z > X){
		cout << "eh um triangulo\n";
	}else{
		cout << "nao eh um triangulo\n";
	}
	
	if(X == Y && Y == Z){
		cout << "eh um triangulo equilatero\n";
	}else{
		if(X == Y || Y == Z || X == Z){
			cout << "eh um triangulo isosceles\n";
		}else{
			cout << "eh um triangulo escaleno\n";
		}
	}
	
	
	return 0;
}

