#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    char *S = (char *)malloc((N + 1) * sizeof(char));
    if (S == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    scanf("%s", S);

    int score = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'V') {
            score += 5;
        } else if (S[i] == 'W') {
            score += 2;
        } else if (S[i] == 'X') {
            if (i + 1 < N) {
                // Remove the next character
                for (int j = i + 1; j < N - 1; j++) {
                    S[j] = S[j + 1];
                }
                N--; // Reduce the length of the string
            }
        } else if (S[i] == 'Y') {
            if (i + 1 < N) {
                // Move the next character to the end
                char temp = S[i + 1];
                for (int j = i + 1; j < N - 1; j++) {
                    S[j] = S[j + 1];
                }
                S[N - 1] = temp;
            }
        } else if (S[i] == 'Z') {
            if (i + 1 < N) {
                if (S[i + 1] == 'V') {
                    score /= 5;
                    // Remove the next character
                    for (int j = i + 1; j < N - 1; j++) {
                        S[j] = S[j + 1];
                    }
                    N--;
                } else if (S[i + 1] == 'W') {
                    score /= 2;
                    // Remove the next character
                    for (int j = i + 1; j < N - 1; j++) {
                        S[j] = S[j + 1];
                    }
                    N--;
                }
            }
        }
    }

    printf("%d\n", score);
    free(S);
    return 0;
}
