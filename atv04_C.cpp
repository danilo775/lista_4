#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char letra;
    cout << "Digite um caractere: ";
    cin >> letra;
    cout << letra << " = " << int(letra) << " octal: " << oct << int(letra) << " hexadecimal: " << hex << int(letra) << endl;
    
    return 0;
}