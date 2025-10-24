#include <iostream>
#include <vector>
#include <algorithm> // For std::max

using namespace std;

vector<int> solve(int t, vector<pair<int, vector<int>>>& cases) {
    vector<int> results;
    for (const auto& case_data : cases) {
        int n = case_data.first;
        vector<int> a = case_data.second;
        int result = a[0]; // Initialize result with the first element
        for (int i = 0; i < n; i += 2) {
            result = max(result, a[i]); // Update result with the maximum of even indexed elements
        }
        results.push_back(result);
    }
    return results;
}

int main() {
    int t;

    cin >> t; // Read number of test cases

    vector<pair<int, vector<int>>> cases(t);
    for (int i = 0; i < t; ++i) {
        int n;
   
        cin >> n; // Read the size of the array
        vector<int> a(n);

        for (int j = 0; j < n; ++j) {
            cin >> a[j]; // Read the array elements
        }
        cases[i] = {n, a}; // Store the case
    }

    vector<int> results = solve(t, cases);

    for (int res : results) {
        cout << res << endl; // Print the results
    }

    return 0;
}
