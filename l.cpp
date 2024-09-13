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
    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    if (abs(num1 - num2) <= 10) {
        cout << "A diferença entre os dois numeros é menor ou igual a 10." << endl;
    } else {
        cout << "A diferença entre os dois numeros é maior que 10." << endl;
    }

    return 0;
}
