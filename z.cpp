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

    cout << "Você é um membro inativo do clube? (não/s): ";
    cin >> resposta;

    if (resposta == "não") {
        cout << "Por favor, atualize sua inscrição para continuar usufruindo dos benefícios do clube." << endl;
    } else {
        cout << "Sua inscrição está atualizada." << endl;
    }

    return 0;
}
