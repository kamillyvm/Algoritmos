//Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um 
//triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles 
//não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:   
//• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;   
//• Equiláteros: tem os comprimentos dos três lados iguais;   
//• Isósceles: tem os comprimentos de dois lados iguais;  •  Escaleno: tem os comprimentos dos três 
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

