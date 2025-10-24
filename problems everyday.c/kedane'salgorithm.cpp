#include <bits/stdc++.h>

using namespace std;
int maxSubArraySum(int arr[], int size) {
    int max_so_far = INT_MIN; 
    int max_ending_here = 0; 

    for (int i = 0; i < size; i++) {
        max_ending_here += arr[i]; 
        if (max_ending_here < 0)
            max_ending_here = 0;

        
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }

    return max_so_far;
}

int main() {
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 }; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = maxSubArraySum(arr, n);
    cout << "Maximum contiguous sum is " << max_sum << endl;

    return 0;
}
