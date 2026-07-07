#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

double findMean(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return (double)sum / (double)n;
}

double findMedian(int a[], int n) {
    qsort(a, n, sizeof(int), cmpfunc);
    if (n % 2 != 0)
        return (double)a[n / 2];
    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}

int main() {
    int a[] = { 1, 3, 4, 2, 7, 5, 8, 6 };
    int N = sizeof(a) / sizeof(a[0]);

    printf("Mean = %f\n", findMean(a, N));
    printf("Median = %f\n", findMedian(a, N));

    return 0;
}
