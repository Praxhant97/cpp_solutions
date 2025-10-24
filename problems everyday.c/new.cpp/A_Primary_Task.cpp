#include <stdio.h>
#include <string.h>

int main() {
    int t;  // Number of test cases
    scanf("%d", &t);  // Read the number of test cases
    
    // Loop through each test case
    for (int i = 0; i < t; i++) {
        char a[10005];  // We use a string to handle large numbers
        scanf("%s", a);  // Read the integer as a string
        
        // Check if the number starts with "10" and has at least 3 digits
        if (strlen(a) >= 3 && a[0] == '1' && a[1] == '0') {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
