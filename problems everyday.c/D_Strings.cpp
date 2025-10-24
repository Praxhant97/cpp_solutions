#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    // Calculate the sizes of A and B
    int sizeA = A.size();
    int sizeB = B.size();

    // Concatenate A and B
    A += B;

    // Swap the first characters of A and B
    swap(A[0], B[0]);

    // Print the corrected results
    cout << sizeA << " " << sizeB << endl;
    cout << A << endl;
    cout << A << " " << B << endl;

    return 0;
}
