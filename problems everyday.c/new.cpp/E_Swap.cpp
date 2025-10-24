#include <stdio.h>

// Function to swap two numbers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x, y;
   
    scanf("%d %d", &x, &y);
    
    // Swapping the numbers
    swap(&x, &y);
    
    printf("%d %d\n", x, y);
    
    return 0;
}
