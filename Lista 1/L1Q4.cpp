#include <iostream>
using namespace std;

int main(){
	int numInteiro;
	float percentualQualquer, valorPercentual;
	
	cout << "Digite um numero: ";
	cin >> numInteiro;
	
	cout << "Digite um percentual qualquer: ";
	cin >> percentualQualquer;
	
	
	valorPercentual = (numInteiro * percentualQualquer) / 100;
	cout << "O valor percentual eh " << percentualQualquer << " e o valor total eh " << valorPercentual <<endl;
	
	
	
	system("pause");
	return 0;
}
