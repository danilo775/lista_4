#include <iostream>
#include <iomanip>

int main() {
    char inputChar;
    std::cout << "Digite um caractere: ";
    std::cin >> inputChar;
    std::cout << "'" << inputChar << "' - " << static_cast<int>(inputChar) << " (octal: " << std::oct << static_cast<int>(inputChar) << ", hexadecimal: " << std::hex << static_cast<int>(inputChar) << ")" << std::endl;
    
    return 0;
}