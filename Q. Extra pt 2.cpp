#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout << "digite o numero para saber o mes: ";
	cin >> num;
	
	if(num == 1){
		cout << "janeiro";
	}else{
		if(num == 2){
			cout << "fevereiro";
		}else{
			if(num == 3){
				cout << "marco";
			}else{
				if(num == 4){
					cout << "abril";
				}else{
					if(num == 5){
						cout << "maio";
					}else{
						if(num == 6){
							cout << "junho";
						}else{
							if(num == 7){
								cout << "julho";
							}else{
								if(num == 8){
									cout << "agosto";
								}else{
									if(num == 9){
										cout << "setembro";
									}else{
										if(num == 10){
											cout << "outubro";
										}else{
											if(num == 11){
												cout << "novembro";
											}else{
												if(num == 12){
													cout << "dezembro";
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}

