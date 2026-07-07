#include <stdio.h>

// Function to calculate the average
double calculateAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

int main() {
    int n;

    scanf("%d", &n);
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    double average = calculateAverage(arr, n);
    printf("%.6f\n", average);
    
    return 0;
}
