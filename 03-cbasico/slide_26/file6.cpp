#include <iostream>
using namespace std;

int main() {
    double salario;
    
    cout << "Informe o seu salário: ";
    cin >> salario;
    
    if (salario >= 15000) {
        cout << "Você está na classe social A." << endl;
    } else if (salario >= 5000) {
        cout << "Você está na classe social B." << endl;
    } else if (salario >= 2000) {
        cout << "Você está na classe social C." << endl;
    } else {
        cout << "Você está na classe social D." << endl;
    }
    
    return 0;
}