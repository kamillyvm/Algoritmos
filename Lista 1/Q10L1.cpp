#include <iostream>
using namespace std;

int main(){
	float varA, varB, Adicao, Subtracao, Multiplicacao, Divisao;
	
	cout << "digite dois valores para fazer as contas: ";
	cin >> varA;
	cin >> varB;
	
	Adicao = varA + varB;
	Subtracao = varA - varB;
	Multiplicacao = varA * varB;
	Divisao = varA / varB;
	
	cout << "a adicao entre os valores sao: " << Adicao << endl;
	cout << "a subtracao entre os valores sao: " << Subtracao << endl;
	cout << "a multiplicacao entre os valores sao: " << Multiplicacao << endl;
	cout << "a divisao entre os valores sao: " << Divisao << endl;
	
	
	return 0;
}
