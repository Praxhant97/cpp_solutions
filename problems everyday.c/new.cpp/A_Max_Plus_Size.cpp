#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxScore(vector<int>& arr) {
    int n = arr.size();
    int maxElement = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] > arr[i - 1]) {
            maxElement = max(maxElement, arr[i]);
            count++;
            i++; 
        }
    }

    return maxElement + count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << maxScore(arr) << endl;
    }
    return 0;
}
