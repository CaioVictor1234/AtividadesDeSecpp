/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char diploma;
    int idade;

    cout << "Você possui um diploma de ensino superior? (s/n): ";
    cin >> diploma;
    cout << "Digite sua idade: ";
    cin >> idade;

    if (diploma == 's' && idade > 21) {
        cout << "Parabéns, você está qualificado para a vaga!" << endl;
    } else {
        cout << "Você não está qualificado para a vaga." << endl;
    }

    return 0;
}