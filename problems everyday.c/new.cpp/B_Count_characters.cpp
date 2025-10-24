#include <iostream>
#include <map>
#include <string>
#include <algorithm>

void countAndSortCharacters(const std::string& s) {
    std::map<char, int> charCount;

    // Count occurrences of each character
    for (char c : s) {
        charCount[c]++;
    }

    // Separate upper and lower case characters
    std::string upperChars, lowerChars;
    for (const auto& pair : charCount) {
        if (isupper(pair.first)) {
            upperChars += pair.first;
        } else {
            lowerChars += pair.first;
        }
    }

    // Sort characters
    std::sort(upperChars.begin(), upperChars.end());
    std::sort(lowerChars.begin(), lowerChars.end());

    // Print upper case characters and their counts
    for (char c : upperChars) {
        std::cout << c <<" " << charCount[c] << std::endl;
    }

    // Print lower case characters and their counts
    for (char c : lowerChars) {
        std::cout << c  <<" "<< charCount[c] << std::endl;
    }
}

int main() {
    std::string s;
 
    std::getline(std::cin, s);
    countAndSortCharacters(s);
    return 0;
}
