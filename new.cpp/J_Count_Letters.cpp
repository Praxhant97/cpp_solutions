#include <stdio.h>
#include <string.h>

void count_letters(const char *s) {
    int count[26] = {0}; 

    while (*s) {
        count[*s - 'a']++;
        s++;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (count[c - 'a'] > 0) {
            printf("%c : %d\n", c, count[c - 'a']);
        }
    }
}

int main() {
    char s[10000001]; 
  
    scanf("%10000000s", s);
    count_letters(s);
    return 0;
}
