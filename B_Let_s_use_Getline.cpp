#include <iostream>
#include <string>

int main() {
    std::string input;

    std::getline(std::cin, input, '\\');  // Read until the backslash
    std::cout<< input << std::endl;
    return 0;
}
