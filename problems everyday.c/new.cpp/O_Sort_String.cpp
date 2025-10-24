#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to swap two characters
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for Quick Sort
int partition(char arr[], int low, int high) {
    char pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quick Sort function
void quickSort(char arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    char *S = (char *)malloc((N + 1) * sizeof(char));
    if (S == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    scanf("%s", S);

    quickSort(S, 0, N - 1);

    printf("%s\n", S);
    free(S);
    return 0;
}
