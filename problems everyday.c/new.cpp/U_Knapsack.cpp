#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}


int knapsack(int W, int w[], int v[], int n) {

    if (n == 0 || W == 0) {
        return 0;
    }

    if (w[n - 1] > W) {
        return knapsack(W, w, v, n - 1);
    } else {

        return max(v[n - 1] + knapsack(W - w[n - 1], w, v, n - 1), knapsack(W, w, v, n - 1));
    }
}

int main() {
    int N, W;

    scanf("%d %d", &N, &W);

    int w[N], v[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &w[i], &v[i]);
    }

    printf("%d\n", knapsack(W, w, v, N));

    return 0;
}
