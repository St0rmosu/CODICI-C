#include <stdio.h>

#define RIGHE 3
#define COLONNE 3

void acquisisciMatrice(int matrice[RIGHE][COLONNE]) {
    printf("Inserisci i valori della matrice (%dx%d):\n", RIGHE, COLONNE);
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
}

void visualizzaMatrice(int matrice[RIGHE][COLONNE]) {
    printf("Matrice:\n");
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

void cercaPrimaOccorrenza(int matrice[RIGHE][COLONNE], int valore) {
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            if (matrice[i][j] == valore) {
                printf("Prima occorrenza di %d trovata a [%d][%d]\n", valore, i, j);
                return;
            }
        }
    }
    printf("Valore %d non trovato nella matrice.\n", valore);
}

void cercaTutteOccorrenze(int matrice[RIGHE][COLONNE], int valore) {
    int trovato = 0;
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            if (matrice[i][j] == valore) {
                printf("Occorrenza di %d trovata a [%d][%d]\n", valore, i, j);
                trovato = 1;
            }
        }
    }
    if (!trovato) {
        printf("Valore %d non trovato nella matrice.\n", valore);
    }
}

int main() {
    int matrice[RIGHE][COLONNE];
    int valore;

    acquisisciMatrice(matrice);
    visualizzaMatrice(matrice);

    printf("Inserisci il valore da cercare: ");
    scanf("%d", &valore);

    cercaPrimaOccorrenza(matrice, valore);
    cercaTutteOccorrenze(matrice, valore);

    return 0;
}