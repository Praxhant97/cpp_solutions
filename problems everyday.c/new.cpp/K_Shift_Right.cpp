#include <stdio.h>

// Function to shift array elements to the right
void shiftRight(int arr[], int n, int x) {
    x = x % n; // To handle cases where x >= n
    for (int i = 0; i < x; i++) {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

int main() {
    int n, x;

    scanf("%d %d", &n, &x);
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    shiftRight(arr, n, x);
    

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
