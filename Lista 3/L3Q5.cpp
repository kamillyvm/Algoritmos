/*

Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma, 
até que seja digitada uma média negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos 
aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar 
as matrículas de todos os alunos que obtiveram médias superiores a 9. 

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
