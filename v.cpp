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

    cout << "Digite seu nome: ";
    getline(cin, nome);

    if (nome == "Wilson" || nome == "Gloria") {
        cout << "Olá, bem-vindo(a) de volta!" << endl;
    } else {
        cout << "Nome não reconhecido." << endl;
    }

    return 0;
}
