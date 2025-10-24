#include <stdio.h>

int isPalindrome(int arr[], int start, int end) {

    if (start >= end) {
        return 1;
    }

    if (arr[start] != arr[end]) {
        return 0;
    }

    return isPalindrome(arr, start + 1, end - 1);
}

int main() {
    int N;

    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    if (isPalindrome(A, 0, N - 1)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
