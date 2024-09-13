#include <iostream>
using namespace std;

int main() {
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano é bissexto." << endl;
    } else {
        cout << "O ano não é bissexto." << endl;
    }

    return 0;
}/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano é bissexto." << endl;
    } else {
        cout << "O ano não é bissexto." << endl;
    }

    return 0;
}