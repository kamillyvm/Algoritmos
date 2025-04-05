//Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, 
//conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e 
//calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de 
//aumento. Mostre o salário antigo, o novo salário e a diferença.   

#include <iostream>
using namespace std;

int main(){
	float salario, novoSalario;
	int codigo; 
	
	cout << "\n\tcodigo		cargo		percentual" << endl;
	cout << "\n\t101		gerente		10%" << endl;
	cout << "\n\t102		engenheiro	20%" << endl;
	cout << "\n\t103		tecnico		30%" << endl;
	cout << "\n\n\t";
	
	cout << "\n\tdigite o salario: " ;
	cin >> salario;
	cout << "\n\tdigite o codigo do cargo: ";
	cin >> codigo;
	
	switch(codigo){
		case 101: novoSalario = salario + (salario * 10 / 100);
		cout << "\n\tseu aumento ficara " << novoSalario;
		break;
		
		case 102: novoSalario = salario + (salario * 20 / 100);
		cout << "\n\tseu aumento ficara " << novoSalario;
		break;
		
		case 103: novoSalario = salario + (salario * 30 / 100);
		cout << "\n\tseu aumento ficara " << novoSalario;
		break;
		
		default: novoSalario = salario + (salario * 40 / 100);
		cout << "\n\tseu codigo nao esta na tabela, ganhara 40% de aumento, ficara " << novoSalario;
		break;
		
	}
	
	
	
	
	return 0;
}

