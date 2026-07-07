#include <iostream>
#include <cmath>
using namespace std;

int maxGoodArrayLength(int l, int r) {

    long long diff = r - l;

    long long k = (-1 + sqrt(1 + 8 * diff)) / 2;
    
    return k + 1; 
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        
        cout << maxGoodArrayLength(l, r) << endl;
    }
    
    return 0;
}
