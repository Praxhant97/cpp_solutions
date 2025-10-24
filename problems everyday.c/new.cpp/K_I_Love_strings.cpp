#include <iostream>
#include <string>
using namespace std;
std::string mergeStrings(const std::string& S, const std::string& T) {
    std::string mergedString;
    size_t minLength = std::min(S.length(), T.length());

    for (size_t i = 0; i < minLength; ++i) {
        mergedString += S[i];
        mergedString += T[i];
    }

    // Add the remaining part of the longer string
    if (S.length() > T.length()) {
        mergedString += S.substr(minLength);
    } else {
        mergedString += T.substr(minLength);
    }

    return mergedString;
}

int main() {
    int n;
cin>>n;
while(n>0){
    std::string S, T;
    
    std::cin >> S;

    std::cin >> T;

    std::string result = mergeStrings(S, T);
    std::cout <<  result << std::endl;
    n--;
}
    return 0;
}
