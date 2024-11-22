#include <iostream>
using namespace std;

int main() {
    int anos, qtdCigarros;
    float preco, qtdDinheiroGasto;
    
    cout << "Ha quantos anos este usuario fuma?";
    cin >> anos;
    
    cout << "Digite a quantidade de cigarros fumados por dia";
    cin >> qtdCigarros;
    
    cout << "Quanto custa uma carteira?";
    cin >> preco;
    
    qtdDinheiroGasto = (anos * 365 * qtdCigarros * preco) / 20;
    
    cout << "A quantidade de dinheiro gasto eh " << qtdDinheiroGasto << endl;
    
    
    
    
	system ("pause");
    return 0;
}
