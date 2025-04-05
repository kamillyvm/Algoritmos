//Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou 
//não se aposentar. As condições para aposentadoria são:  
//• Ter pelo menos 65 anos;  
//• Ou ter trabalhado pelo menos 30 anos;   
//• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.  

#include <iostream>
using namespace std;

int main(){
	int idade, tempo;
	
	cout << "digite sua idade: ";
	cin >> idade;
	cout << "digite o tempo de servico do trabalho: ";
	cin >> tempo;
	
	if((idade >= 65)||(tempo >= 30)||(idade == 60 && tempo == 25)){
		cout << "voce pode se aposentar";
	}else{
		cout << "voce ainda nao pode se aposentar";
	}
	
	
	
	return 0;
}

