#include <iostream>
using namespace std;

int main(){
	int valorA, valorB, Aux;
	cout << "digite o numero para o valor A e B: ";
	cin >> valorA;
	cin >> valorB;
	
	Aux = valorA;
	valorA = valorB;
	valorB = Aux;
	
	cout << "o valor A eh: " << valorA << ", e valor B eh: " << valorB;
	
	
	return 0;
}
