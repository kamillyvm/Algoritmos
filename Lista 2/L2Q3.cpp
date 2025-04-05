//Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino). 
//Utilize as seguintes fórmulas para cálculo do peso ideal:   
//• Masculino = (72,7 x altura) - 58   
//• Feminino = (62,1 x altura) - 44,7  

#include <iostream>
using namespace std;

int main(){
	char genero;
	float altura, pesoIdealm, pesoIdealf;
	
	cout << "digite seu genero ('f' para feminino e 'm' para masculino): " << endl;
	cin >> genero;
	cout << "digite sua altura: ";
	cin >> altura;
	
	pesoIdealm = (72.7 * altura) - 58;
	pesoIdealf = (62.1 * altura) - 44.7;
	
	if(genero == 'm'){
		cout << "seu peso ideal eh " << pesoIdealm <<endl;
	}else{
		if(genero == 'f'){
			cout << "seu peso ideal eh " << pesoIdealf <<endl;
		}else{
			cout << "genero invalido. insira m para masculino ou f para feminino." << endl;
		}
	}
	
	
	
	return 0;
}
