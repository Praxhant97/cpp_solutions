#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    scanf("%d", &N);
    
    int A[N];
    int sum = 0;
    

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);

        sum += (A[i]);
    }
sum=abs(sum);
    printf("%d", sum);
    
    return 0;
}
