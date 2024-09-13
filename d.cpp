/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    cout << "Digite o terceiro numero: ";
    cin >> num3;

    if (num1 < num2 && num1 > num3) {
        cout << "O primeiro numero é menor que o segundo e maior que o terceiro." << endl;
    } else {
        cout << "O primeiro numero não atende às condições." << endl;
    }

    return 0;
}
