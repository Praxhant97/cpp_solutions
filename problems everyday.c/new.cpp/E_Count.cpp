#include <stdio.h>
#include <ctype.h>

int sum_of_digits(const char *s) {
    int total = 0;
    while (*s) {
        if (isdigit(*s)) {
            total += *s - '0';
        }
        s++;
    }
    return total;
}

int main() {
    char s[1000001]; // Assuming the maximum length of the string is 1,000,000

    scanf("%1000000s", s);
    printf("%d\n", sum_of_digits(s));
    return 0;
}
