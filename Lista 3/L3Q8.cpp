/*

Uma rainha requisitou os serviços de um monge, o qual exigiu o pagamento em grãos de trigo da seguinte 
maneira: os grãos de trigo seriam dispostos em um tabuleiro de xadrez, de tal forma que a primeira casa  
do tabuleiro tivesse um grão, e as casas seguintes o dobro da anterior. Considere que o tabuleiro de 
xadrez é 8x8 e que o número da casa varia de 1-8 para a primeira linha, de 9-16 para a segunda linha e 
assim sucessivamente. Construa um algoritmo que calcule quantos grãos de trigo a Rainha deverá pagar 
ao monge a partir da leitura do número da casa desejada. 

*/

#include<iostream>
using namespace std;

int main(){
	int casa, cont;
	unsigned long long graos, pagamento;
	
	cout << "-------------------------------------------------" << endl;
    cout << "|  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|  9  | 10  | 11  | 12  | 13  | 14  | 15  | 16  |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "| 17  | 18  | 19  | 20  | 21  | 22  | 23  | 24  |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "| 25  | 26  | 27  | 28  | 29  | 30  | 31  | 32  |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "| 33  | 34  | 35  | 36  | 37  | 38  | 39  | 40  |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "| 41  | 42  | 43  | 44  | 45  | 46  | 47  | 48  |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "| 49  | 50  | 51  | 52  | 53  | 54  | 55  | 56  |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "| 57  | 58  | 59  | 60  | 61  | 62  | 63  | 64  |" << endl;
    cout << "-------------------------------------------------" << endl;
	cout << "\nqual casa desejada do pagamento? ";
	cin >> casa;
	
	graos = 1;
	for(cont = 1; cont <= casa; cont++){
		pagamento = graos;
		graos = graos * 2;
	}
	
	cout << "o pagamento ao monge sera: R$ " << pagamento;
	
	return 0;
}
