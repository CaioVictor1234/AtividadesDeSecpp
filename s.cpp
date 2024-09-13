/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char adicionarAcucar, adicionarLeite;

    cout << "Você deseja adicionar açúcar ao seu café? (s/n): ";
    cin >> adicionarAcucar;
    cout << "Você deseja adicionar leite ao seu café? (s/n): ";
    cin >> adicionarLeite;

    if (adicionarAcucar == 's' || adicionarLeite == 's') {
        cout << "Café com adicional preparado!" << endl;
    } else {
        cout << "Café sem adição." << endl;
    }

    return 0;
}
