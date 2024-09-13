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
    string resposta;

    cout << "Você deseja cancelar a operação? (não/s): ";
    cin >> resposta;

    if (resposta == "não") {
        cout << "Por favor, confirme o cancelamento da operação." << endl;
    } else {
        cout << "Operação não cancelada." << endl;
    }

    return 0;
}
