#include <iostream>
#include <string>
#include <cctype>  // For std::isalpha

int main() {
    std::string input;

    std::getline(std::cin, input);  // Read the entire line

    int count = 0;
    bool inWord = false;

    for (char c : input) {
        if (std::isalpha(c)) {
            if (!inWord) {
                inWord = true;
                ++count;
            }
        } else {
            inWord = false;
        }
    }

    std::cout <<  count << std::endl;
    return 0;
}
