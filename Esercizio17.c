#include <stdio.h>

#define ROWS 10
#define COLS 10

void findRowMinMax(int matrix[ROWS][COLS], int rowMin[ROWS], int rowMax[ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        rowMin[i] = matrix[i][0];
        rowMax[i] = matrix[i][0];
        for (int j = 1; j < COLS; j++) {
            if (matrix[i][j] < rowMin[i]) {
                rowMin[i] = matrix[i][j];
            }
            if (matrix[i][j] > rowMax[i]) {
                rowMax[i] = matrix[i][j];
            }
        }
    }
}

void findColMinMax(int matrix[ROWS][COLS], int colMin[COLS], int colMax[COLS]) {
    for (int j = 0; j < COLS; j++) {
        colMin[j] = matrix[0][j];
        colMax[j] = matrix[0][j];
        for (int i = 1; i < ROWS; i++) {
            if (matrix[i][j] < colMin[j]) {
                colMin[j] = matrix[i][j];
            }
            if (matrix[i][j] > colMax[j]) {
                colMax[j] = matrix[i][j];
            }
        }
    }
}

void findOverallMinMax(int matrix[ROWS][COLS], int *overallMin, int *overallMax) {
    *overallMin = matrix[0][0];
    *overallMax = matrix[0][0];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] < *overallMin) {
                *overallMin = matrix[i][j];
            }
            if (matrix[i][j] > *overallMax) {
                *overallMax = matrix[i][j];
            }
        }
    }
}

int main() {
    int matrix[ROWS][COLS];
    int rowMin[ROWS], rowMax[ROWS];
    int colMin[COLS], colMax[COLS];
    int overallMin, overallMax;

    // Input matrix elements
    printf("Inserisci gli elementi della matrice 10x10:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Trova min e max per riga
    findRowMinMax(matrix, minRiga, maxRiga);

    // Trova min e max per colonna
    findColMinMax(matrix, minColonna, maxColonna);

    // Trova min e max generale
    findOverallMinMax(matrix, &minGenerale, &maxGenerale);

    // Stampa i risultati
    printf("\nMinimo e massimo per riga:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Riga %d: Min = %d, Max = %d\n", i, minRiga[i], maxRiga[i]);
    }

    printf("\nMinimo e massimo per colonna:\n");
    for (int j = 0; j < COLS; j++) {
        printf("Colonna %d: Min = %d, Max = %d\n", j, minColonna[j], maxColonna[j]);
    }

    printf("\nMinimo e massimo generale:\n");
    printf("Min = %d, Max = %d\n", minGenerale, maxGenerale);
    printf("Min = %d, Max = %d\n", overallMin, overallMax);

    return 0;
}