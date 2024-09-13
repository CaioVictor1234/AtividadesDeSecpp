/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;

    cout << "Digite seu nome: ";
    getline(cin, nome);
    cout << "Digite sua idade: ";
    cin >> idade;

    if (nome.length() > 3 && idade >= 18) {
        cout << "Acesso permitido." << endl;
    } else {
        cout << "Acesso negado." << endl;
    }

    return 0;
}
