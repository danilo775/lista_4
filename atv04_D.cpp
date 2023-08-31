#include <iostream>
#include <iomanip>

int main() {
    char specialChar1 = 'ç';
    char specialChar2 = 'ã';
    std::cout << "\nParte d:" << std::endl;
    std::cout << "'" << specialChar1 << "' - " << static_cast<int>(specialChar1) << " (octal: " << std::oct << static_cast<int>(specialChar1) << ", hexadecimal: " << std::hex << static_cast<int>(specialChar1) << ")" << std::endl;
    std::cout << "'" << specialChar2 << "' - " << static_cast<int>(specialChar2) << " (octal: " << std::oct << static_cast<int>(specialChar2) << ", hexadecimal: " << std::hex << static_cast<int>(specialChar2) << ")" << std::endl;

    return 0;
}