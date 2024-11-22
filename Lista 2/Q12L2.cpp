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
