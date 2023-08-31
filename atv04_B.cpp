#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    std::cout << "\nParte b:" << std::endl;
    for (char i = '0'; i <= '9'; ++i) {
        cout <<  i << " - " <<  int(i) << " octal: " << oct << int(i) << " hexadecimal: " << hex << int(i) << endl;
    }


    return 0;
}