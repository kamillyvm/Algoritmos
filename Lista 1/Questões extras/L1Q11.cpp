//Leia três notas e três pesos, um para cada nota, 
//calcule e escreva a média aritmética e a média ponderada das três notas 
//e, nos dois casos, quanto falta para o aluno ser aprovado por média 
//(considere a média para aprovação igual a 6,0).

#include<iostream>
using namespace std;

int main(){
	float n1, n2, n3, p1, p2, p3, mediaA, mediaP;
	
	cout << "digite a primeira nota e o peso: ";
	cin >> n1 >> p1;
	cout << "digite a segunda nota e o peso: ";
	cin >> n2 >> p2;
	cout << "digite a terceira nota e o peso: ";
	cin >> n3 >> p3;
	
	mediaA = (n1 + n2 + n3)/3;
	mediaP = (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 + p3);
	
	cout << "media aritmetica: " << mediaA << endl;
	cout << "media ponderada: " << mediaP << endl;
	
	if(mediaA < 6){
		cout << "falta " << (6 - mediaA) << " para passar em media aritmetica." << endl;
	}else{
		cout << "Aprovado por media aritmetica." << endl;
	}
	
	if(mediaP < 6){
		cout << "falta " << (6 - mediaP) << " para passar em media ponderada." << endl;
	}else{
		cout << "Aprovado por media ponderada" << endl;
	}
	return 0;

}
