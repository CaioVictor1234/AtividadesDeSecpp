/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cout << "Digite o primeiro numero real: ";
    cin >> num1;
    cout << "Digite o segundo numero real: ";
    cin >> num2;

    if (num1 <= num2) {
        cout << "O primeiro numero é menor ou igual ao segundo numero." << endl;
    } else {
        cout << "O primeiro numero não é menor ou igual ao segundo numero." << endl;
    }

    return 0;
}
