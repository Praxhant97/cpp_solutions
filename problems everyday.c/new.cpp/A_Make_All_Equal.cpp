#include <stdio.h>

int minoper(int n, int a[]) {   //oper=operations minoper=minimum operations
    int oper = 0;
    int maxfreq = 0;
    int freq[101] = {0};

    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
        if (freq[a[i]] > maxfreq) {
            maxfreq = freq[a[i]];
        }
    }

    oper = n - maxfreq;

    return oper;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("%d\n", minoper(n, a));
    }

    return 0;
}
