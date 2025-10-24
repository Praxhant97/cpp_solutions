#include <stdio.h>
#include <string.h>

int main() {
    char S[1001];
    scanf("%s", S);

    int countL = 0, countR = 0, balancedCount = 0;
    int len = strlen(S);

    for (int i = 0; i < len; i++) {
        if (S[i] == 'L') {
            countL++;
        } else if (S[i] == 'R') {
            countR++;
        }

        if (countL == countR) {
            balancedCount++;
            countL = 0;
            countR = 0;
        }
    }

    printf("%d\n", balancedCount);

    countL = 0;
    countR = 0;
    for (int i = 0; i < len; i++) {
        if (S[i] == 'L') {
            countL++;
        } else if (S[i] == 'R') {
            countR++;
        }

        putchar(S[i]);

        if (countL == countR) {
            printf("\n");
            countL = 0;
            countR = 0;
        }
    }

    return 0;
}
