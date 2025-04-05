//Leia um n mero, verifique e escreva se este n mero   par ou  mpar. Se for par, verifique e escreva se   
//maior que 100 ou n o e se for  mpar verifique e escreva se   positivo ou negativo.  

#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout << "digite um numero: ";
	cin >> num;
	
	if(num%2 == 0){
		cout << "o numero eh par" << endl;
		
		if(num > 100){
			cout << "eh maior que 100";
		}else{
			cout << "eh menor que 100";
		}
		
	}else{
		
		cout << "o numero eh impar" << endl;
		
		if(num > 0){
			cout << "eh positivo" << endl;
		}else{
			cout << "eh negativo" << endl;
		}
	}
	
	
	return 0;
}
