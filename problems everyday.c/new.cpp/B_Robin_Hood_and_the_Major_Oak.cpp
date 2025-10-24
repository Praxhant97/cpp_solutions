#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    
    // Read the number of test cases
    cin >> t;
    
    while (t--) { // Loop through all test cases
        int n, k;
        
        // Read n and k for this test case
        cin >> n >> k;
        
        // Determine if the number of leaves in year n is even or odd
        // The number of leaves is even if n is even
        if (n % 2 == 0) {
            cout << "YES" << endl; // If even, print "YES"
        } else {
            cout << "NO" << endl;  // If odd, print "NO"
        }
    }
    
    return 0;
}
