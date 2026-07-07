#include <iostream>
#include <vector>

using namespace std;

void reducegrid(int t) {
    while (t--) {
        int n, k;
        cin >> n >> k; 

        vector<string> grid(n);  
        for (int i = 0; i < n; i++) {
            cin >> grid[i]; 
        }

        int redsize = n / k;

        for (int i = 0; i < redsize; i++) {
            for (int j = 0; j < redsize; j++) {
    
                cout << grid[i * k][j * k];
            }
            cout << endl; 
        }
    }
}

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    reducegrid(t); 
    return 0;
}
