#include <stdio.h>
#include <string.h>

void check_string(const char *s) {
    if (strstr(s, "010") != NULL || strstr(s, "101") != NULL) {
        printf("Good\n");
    } else {
        printf("Bad\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char s[100001];
        scanf("%100000s", s);
        check_string(s);
    }
    return 0;
}
