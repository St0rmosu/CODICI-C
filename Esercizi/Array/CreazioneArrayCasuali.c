#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMENSIONE 10

void riempiVettoreCasuale(int vettore[], int dimensione);
void sommaVettori(int vettore1[], int vettore2[], int vettore3[], int dimensione);
void rimuoviDuplicati(int vettore[], int *dimensione);
void invertiVettore(int vettore[], int dimensione);
void stampaVettore(int vettore[], int dimensione);

int main() {

    int vet1[DIMENSIONE]; //Dichiarazione del vettore1
    int vet2[DIMENSIONE]; //Dichiarazione del vettore2
    int vet3[DIMENSIONE]; //Dichiarazione del vettore3
    int vet4[DIMENSIONE]; //Dichiarazione del vettore4

    srand(time(NULL)); //Inizializzazione del generatore di numeri casuali 

    riempiVettoreCasuale(vet1, DIMENSIONE);
    riempiVettoreCasuale(vet2, DIMENSIONE);

    sommaVettori(vet1, vet2, vet3, DIMENSIONE);

    int dimensione_vet4 = DIMENSIONE;
    for (int i = 0; i < DIMENSIONE; i++) {
        vet4[i] = vet3[i];
    }
    rimuoviDuplicati(vet4, &dimensione_vet4);

    int vet5[DIMENSIONE];
    for (int i = 0; i < dimensione_vet4; i++) {
        vet5[i] = vet4[dimensione_vet4 - 1 - i];
    }

    printf("Vet1: ");
    stampaVettore(vet1, DIMENSIONE);
    printf("\n");

    printf("Vet2: ");
    stampaVettore(vet2, DIMENSIONE);
    printf("\n");

    printf("Vet3: ");
    stampaVettore(vet3, DIMENSIONE);
    printf("\n");

    printf("Vet4: ");
    stampaVettore(vet4, dimensione_vet4);
    printf("\n");

    printf("Vet5: ");
    stampaVettore(vet5, dimensione_vet4);
    printf("\n");

    return 0;
}

void riempiVettoreCasuale(int vettore[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        vettore[i] = rand() % 10 + 1;
    }
}

void sommaVettori(int vettore1[], int vettore2[], int vettore3[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        vettore3[i] = vettore1[i] + vettore2[i];
    }
}

void rimuoviDuplicati(int vettore[], int *dimensione) {
    int nuovo_dimensione = 0;
    for (int i = 0; i < *dimensione; i++) {
        int presente = 0;
        for (int j = 0; j < nuovo_dimensione; j++) {
            if (vettore[i] == vettore[j]) {
                presente = 1;
                break;
            }
        }
        if (!presente) {
            vettore[nuovo_dimensione++] = vettore[i];
        }
    }
    *dimensione = nuovo_dimensione;
}

void invertiVettore(int vettore[], int dimensione) {
    for (int i = 0; i < dimensione / 2; i++) {
        int temp = vettore[i];
        vettore[i] = vettore[dimensione - 1 - i];
        vettore[dimensione - 1 - i] = temp;
    }
}

void stampaVettore(int vettore[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", vettore[i]);
    }
}
