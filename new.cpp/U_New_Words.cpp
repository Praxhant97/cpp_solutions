#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char S[1000001];
    scanf("%s", S);

    int countE = 0, countG = 0, countY = 0, countP = 0, countT = 0;

    for (int i = 0; S[i] != '\0'; i++) {
        char ch = toupper(S[i]);
        if (ch == 'E') countE++;
        else if (ch == 'G') countG++;
        else if (ch == 'Y') countY++;
        else if (ch == 'P') countP++;
        else if (ch == 'T') countT++;
    }

    int minCount = countE;
    if (countG < minCount) minCount = countG;
    if (countY < minCount) minCount = countY;
    if (countP < minCount) minCount = countP;
    if (countT < minCount) minCount = countT;

    printf("%d\n", minCount);

    return 0;
}
