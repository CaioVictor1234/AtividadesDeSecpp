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

    cout << "Você deseja comprar o produto? (sim/s): ";
    cin >> resposta;

    if (resposta == "sim" || resposta == "s") {
        cout << "Obrigado pela compra!" << endl;
    } else {
        cout << "Compra não realizada." << endl;
    }

    return 0;
}
