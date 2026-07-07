#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to reverse a substring from index start to end
void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char *S = (char *)malloc(1000001 * sizeof(char));
    if (S == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    fgets(S, 1000001, stdin);

    int len = strlen(S);
    if (S[len - 1] == '\n') {
        S[len - 1] = '\0';  // Remove the newline character
        len--;
    }

    char *word_start = S;
    for (int i = 0; i <= len; i++) {
        if (S[i] == ' ' || S[i] == '\0') {
            reverse(word_start, S + i - 1);
            word_start = S + i + 1;
        }
    }

    printf("%s\n", S);
    free(S);
    return 0;
}
