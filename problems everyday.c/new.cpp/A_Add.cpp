#include <stdio.h>

// Function to add two numbers
int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y;

    scanf("%d %d", &x, &y);
    
    int sum = add(x, y);
    printf("%d\n", sum);
    
    return 0;
}

