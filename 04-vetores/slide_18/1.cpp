#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Digite um número: ";
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cout << "*";
    }
    
    cout << endl;
    
    return 0;
}