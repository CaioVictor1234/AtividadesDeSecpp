/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "Os dois numeros são iguais." << endl;
    } else {
        cout << "Os dois numeros não são iguais." << endl;
    }

    return 0;
}
