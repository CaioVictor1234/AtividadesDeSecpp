/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char desejaComprar, temDinheiro;
    cout << "Você deseja comprar um carro novo? (s/n): ";
    cin >> desejaComprar;
    cout << "Você tem dinheiro suficiente? (s/n): ";
    cin >> temDinheiro;

    if ((desejaComprar == 's' || desejaComprar == 'S') && (temDinheiro == 's' || temDinheiro == 'S')) {
        cout << "Parabéns, você pode comprar um carro novo!" << endl;
    } else {
        cout << "Você não pode comprar um carro novo." << endl;
    }

    return 0;
}
