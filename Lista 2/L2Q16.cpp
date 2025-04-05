//Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos 
//completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a 
//carteira. 

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

