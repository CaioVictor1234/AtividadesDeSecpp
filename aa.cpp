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
    string palavra;

    cout << "Digite uma palavra: ";
    getline(cin, palavra);

    if (!palavra.empty()) {
        cout << "A palavra não é vazia." << endl;
    } else {
        cout << "A palavra é vazia." << endl;
    }

    return 0;
}
