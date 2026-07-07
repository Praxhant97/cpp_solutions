#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void pop_back(char *S) {
    int len = strlen(S);
    if (len > 0) {
        S[len - 1] = '\0';
    }
}

void front(char *S) {
    if (strlen(S) > 0) {
        printf("%c\n", S[0]);
    }
}

void back(char *S) {
    int len = strlen(S);
    if (len > 0) {
        printf("%c\n", S[len - 1]);
    }
}

int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

void sort(char *S, int l, int r) {
    if (l >= 1 && r <= strlen(S) && l <= r) {
        qsort(S + l - 1, r - l + 1, sizeof(char), compare);
    }
}

void reverse(char *S, int l, int r) {
    if (l >= 1 && r <= strlen(S) && l <= r) {
        while (l < r) {
            char temp = S[l - 1];
            S[l - 1] = S[r - 1];
            S[r - 1] = temp;
            l++;
            r--;
        }
    }
}

void print(char *S, int pos) {
    if (pos >= 1 && pos <= strlen(S)) {
        printf("%c\n", S[pos - 1]);
    }
}

void substr(char *S, int l, int r) {
    if (l >= 1 && r <= strlen(S) && l <= r) {
        for (int i = l - 1; i < r; i++) {
            printf("%c", S[i]);
        }
        printf("\n");
    }
}

void push_back(char *S, char x) {
    int len = strlen(S);
    if (len < 1003) {  // Ensure we don't exceed buffer size
        S[len] = x;
        S[len + 1] = '\0';
    }
}

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);
    char S[1004];
    scanf("%s", S);

    for (int i = 0; i < Q; i++) {
        char query[20];
        scanf("%s", query);

        if (strcmp(query, "pop_back") == 0) {
            pop_back(S);
        } else if (strcmp(query, "front") == 0) {
            front(S);
        } else if (strcmp(query, "back") == 0) {
            back(S);
        } else if (strcmp(query, "sort") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            sort(S, l, r);
        } else if (strcmp(query, "reverse") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            reverse(S, l, r);
        } else if (strcmp(query, "print") == 0) {
            int pos;
            scanf("%d", &pos);
            print(S, pos);
        } else if (strcmp(query, "substr") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            substr(S, l, r);
        } else if (strcmp(query, "push_back") == 0) {
            char x;
            scanf(" %c", &x);
            push_back(S, x);
        }
    }

    return 0;
}
