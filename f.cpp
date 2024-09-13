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
    cout << "Digite um numero inteiro: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "O numero é par." << endl;
    } else {
        cout << "O numero não é par." << endl;
    }

    return 0;
}
