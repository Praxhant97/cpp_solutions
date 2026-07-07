#include <stdio.h>
#include <ctype.h>

void convert_string(char *s) {
    while (*s) {
        if (*s == ',') {
            *s = ' ';
        } else if (islower(*s)) {
            *s = toupper(*s);
        } else if (isupper(*s)) {
            *s = tolower(*s);
        }
        s++;
    }
}

int main() {
    char s[100001];
  
    scanf("%100000s", s);
    convert_string(s);
    printf("%s\n", s);
    return 0;
}
