#include <stdio.h>

void swapRows(int matrix[][500], int N, int X, int Y) {
    for (int i = 0; i < N; i++) {
        int temp = matrix[X][i];
        matrix[X][i] = matrix[Y][i];
        matrix[Y][i] = temp;
    }
}

void swapColumns(int matrix[][500], int N, int X, int Y) {
    for (int i = 0; i < N; i++) {
        int temp = matrix[i][X];
        matrix[i][X] = matrix[i][Y];
        matrix[i][Y] = temp;
    }
}

void printMatrix(int matrix[][500], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);
    X--; // Adjusting for 0-based indexing
    Y--; // Adjusting for 0-based indexing

    int matrix[500][500];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    swapRows(matrix, N, X, Y);
    swapColumns(matrix, N, X, Y);
    printMatrix(matrix, N);

    return 0;
}
