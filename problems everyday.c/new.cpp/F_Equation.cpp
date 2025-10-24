#include <stdio.h>


int calculateSum(int x, int n) {
    int sum = 0;
    for (int i = 0; i <= n; i += 2) {
        if (i == 0) {
            sum += (x - 1);
        } else {
            sum += x * i;
        }
    }
    return sum;
}

int main() {
    int x, n;

    scanf("%d %d", &x, &n);
    
    int result = calculateSum(x, n);
    printf("%d\n", result);
    
    return 0;
}
