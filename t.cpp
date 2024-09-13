/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    if (num % 3 == 0 || num % 5 == 0) {
        cout << "O número é divisível por 3 ou por 5!" << endl;
    } else {
        cout << "O número não é divisível nem por 3 nem por 5." << endl;
    }

    return 0;
}
