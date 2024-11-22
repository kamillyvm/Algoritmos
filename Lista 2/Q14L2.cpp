#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	
	cout << "digite tres numeros inteiros: ";
	cin >> num1 >> num2 >> num3;
	
	if((num1 == num2)&&(num2 == num3)){
		cout << "os tres numeros sao iguais";
	}else{
		if((num1 != num2)&&(num2 != num3)&&(num1 != num3)){
			cout << "os tres numeros sao diferentes";
		}else{
			if((num1 == num2)||(num2 == num3)||(num1 == num3)){
				cout << "dois numeros sao iguais";
			}
		}
	}
	
	
	
	
	return 0;
}
