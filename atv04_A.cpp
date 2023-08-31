#include <iostream>
#include <iomanip>

int main() {
    // Parte a
    std::cout << "Parte a:" << std::endl;
    for (char i = '0'; i <= '9'; ++i) {
        std::cout <<  i << " - " << int(i) << std::endl;
    }  
 
    return 0;
}
