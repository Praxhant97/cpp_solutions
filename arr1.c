#include <stdio.h>

int main() {
    int arr[100]; 
    int n, value;

    printf("C Program to insert an element at the end of an Array\n");
    printf("Please enter the number of elements you want in the Array: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        printf("Please enter the value for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    
    printf("\nLet's insert an element at the end.\n");
    printf("Please enter a number to insert at the end: ");
    scanf("%d", &value);

    arr[n] = value; 

    printf("Element %d is inserted at index %d.\n", value, n);

   
    printf("New Array:\n");
    for (int i = 0; i < n + 1; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
