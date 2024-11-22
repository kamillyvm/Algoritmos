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
