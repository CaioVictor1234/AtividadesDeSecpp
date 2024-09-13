/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    double lado1, lado2, lado3;

    cout << "Digite o comprimento do primeiro lado: ";
    cin >> lado1;
    cout << "Digite o comprimento do segundo lado: ";
    cin >> lado2;
    cout << "Digite o comprimento do terceiro lado: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        cout << "O triângulo é equilátero." << endl;
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        cout << "O triângulo é isósceles." << endl;
    } else {
        cout << "O triângulo é escaleno." << endl;
    }

    return 0;
}
