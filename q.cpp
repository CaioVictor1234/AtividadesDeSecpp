/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char assinante;
    char assistiuSerie;

    cout << "Você é assinante de um serviço de streaming? (s/n): ";
    cin >> assinante;
    cout << "Você já assistiu à série específica? (s/n): ";
    cin >> assistiuSerie;

    if (assinante == 's' && assistiuSerie == 's') {
        cout << "Ótimo, agora você pode assistir à nova temporada!" << endl;
    } else {
        cout << "Você não pode assistir à nova temporada." << endl;
    }

    return 0;
}
