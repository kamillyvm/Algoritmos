#include <iostream>
using namespace std;

int main(){
	float valorCotacao, valorDollar, valorReais;
	
	cout << "digite o da cotacao do dollar: ";
	cin >> valorCotacao;
	
	cout << "digite a quantidade que deseja converter: ";
	cin >> valorDollar;
	
	valorReais = valorCotacao * valorDollar;
	
	cout << "a conversao eh: " << valorReais << " reais." << endl;
	
	
	return 0;
}
