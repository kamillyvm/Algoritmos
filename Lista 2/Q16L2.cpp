#include <iostream>
using namespace std;

int main(){
	int idade, anos;
	
	cout << "digite sua idade: ";
	cin >> idade;
	
	
	if(idade < 18){
		anos = 18 - idade;
		cout << "voce nao tem idade para tirar carteira de habilitacao e faltam " << anos << " anos." << endl;
	}else{
		cout << "tem idade para tirar carteira de habilitacao" << endl;
	}
	
	
	
	
	return 0;
}
