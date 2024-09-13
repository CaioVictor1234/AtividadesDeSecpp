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

    cout << "Você é um robô? (não/s): ";
    cin >> resposta;

    if (resposta == "não") {
        cout << "Por favor, prove que você não é um robô." << endl;
    } else {
        cout << "Resposta não reconhecida." << endl;
    }

    return 0;
}
