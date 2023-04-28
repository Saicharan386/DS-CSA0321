#include <stdio.h>

#define ROWS 2
#define COLS 2

void matrix_multiplication(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            C[i][j] = 0;
            for (int k = 0; k < ROWS; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void print_matrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[ROWS][COLS] = { {1, 2}, {3, 4} };
    int B[ROWS][COLS] = { {5, 6}, {7, 8} };
    int C[ROWS][COLS];

    matrix_multiplication(A, B, C);

    printf("Matrix A:\n");
    print_matrix(A);

    printf("Matrix B:\n");
    print_matrix(B);

    printf("Matrix C = A*B:\n");
    print_matrix(C);

    return 0;
}

