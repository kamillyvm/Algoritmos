#include <iostream>
using namespace std;

int main(){
	int grausC, grausF;
	
	cout << "digite uma temperatura em graus Celcius: ";
	cin >> grausC;
	
	grausF = (9 * grausC + 160) / 5;
	
	cout << "a conversao do graus em Fahrenheit eh: " << grausF << endl;
	
	
	return 0;
}
