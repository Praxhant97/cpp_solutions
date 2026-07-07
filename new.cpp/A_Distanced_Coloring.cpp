#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k; // Read dimensions of the grid and constant k

        // Calculate the number of colors needed using ceiling division
        long long rows_needed = (n + k - 1) / k; // This is ceil(n / k)
        long long cols_needed = (m + k - 1) / k; // This is ceil(m / k)
        
        // Total colors needed
        long long colors_needed = rows_needed * cols_needed;
        
        cout << colors_needed << endl; // Output the result
    }

    return 0;
}
