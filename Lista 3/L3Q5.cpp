/*

Fa�a um algoritmo que leia as matr�culas e as respectivas m�dias finais de v�rios alunos de uma turma, 
at� que seja digitada uma m�dia negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos 
aprovados (m�dia >=7), reprovados (m�dia <3) ou em recupera��o. Al�m disso, o algoritmo deve mostrar 
as matr�culas de todos os alunos que obtiveram m�dias superiores a 9. 

*/

#include <iostream>
using namespace std;

int main(){
	int matricula, alunos = 0, aprovados, reprovados, recuperacao;
	float media = 0;
	
	
	aprovados = 0;
	reprovados = 0;
	recuperacao = 0;
	
	do{
		cout << "digite a matricula: ";
		cin >> matricula;
		cout << "digite a media: ";
		cin >> media;
			
		if(media > 9){
			cout << "aluno da matricula " << matricula << " tirou a media superior a 9." << endl;
		}else{
			if(media >= 7){
				aprovados++;
			}else{
				if(media < 3){
					reprovados++;
				}else{
					recuperacao++;
				}
			}
		}
		
	}while(media >= 0);
	
	cout << "total de alunos aprovados: " << aprovados << endl;
	cout << "total de alunos reprovados: " << reprovados << endl;
	cout << "total de alunos em recuperacao: " << recuperacao << endl;
	
	return 0;
}
