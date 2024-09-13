/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int idade;
    char carteira;
    cout << "Qual é a sua idade? ";
    cin >> idade;
    cout << "Você possui carteira de motorista? (s/n): ";
    cin >> carteira;

    if (idade > 18 && (carteira == 's' || carteira == 'S')) {
        cout << "Você pode dirigir." << endl;
    } else {
        cout << "Você não pode dirigir." << endl;
    }

    return 0;
}
