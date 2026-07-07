#include <stdio.h>
#include <stdlib.h>

// Function to concatenate two arrays
void concatenateArrays(int a[], int b[], int n, int c[]) {
    for (int i = 0; i < n; i++) {
        c[i] = b[i];
    }
    for (int i = 0; i < n; i++) {
        c[n + i] = a[i];
    }
}

int main() {
    int n;

    scanf("%d", &n);
    
    int a[n], b[n], c[2 * n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    
    concatenateArrays(a, b, n, c);

    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    
    return 0;
}
