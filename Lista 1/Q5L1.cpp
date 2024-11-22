#include <iostream>
using namespace std;

int main(){
	int horas, minutos, segundos, duracao;
	
	cout << "digite o tempo de duracao de um evento em segundos: ";
	cin >> duracao;
	
	horas = duracao / 3600; // 1 hora = 3600 segundos
    duracao %= 3600;
    minutos = duracao / 60; // 1 minuto = 60 segundos
    segundos = duracao % 60;

    cout << "a duracao do evento eh: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos." << endl; 
	
	
	
	return 0;
}
