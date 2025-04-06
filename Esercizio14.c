#include <stdio.h>

#define DIMENSIONE_VETTORE 10

// Funzione per calcolare la media dei numeri pari e la somma dei numeri dispari
void calcolaMediaSomma(int numeri[]) {
    int sommaDispari = 0, contPari = 0, sommaPari = 0;
    float mediaPari;

    for (int i = 0; i < DIMENSIONE_VETTORE; i++) {
        if (numeri[i] % 2 == 0) {
            contPari++;
            sommaPari += numeri[i];
        } else {
            sommaDispari += numeri[i];
        }
    }

    mediaPari = (float)sommaPari / contPari;

    printf("Media numeri pari: %.2f\n", mediaPari);
    printf("Somma numeri dispari: %d\n", sommaDispari);
}

int main() {
    int numeri[DIMENSIONE_VETTORE];
    
    // Richiedi all'utente di inserire un vettore di 10 numeri interi
    printf("Inserisci un vettore di 10 numeri interi:\n");
    for (int i = 0; i < DIMENSIONE_VETTORE; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &numeri[i]);
    }

    // Calcola e stampa la media dei numeri pari e la somma dei numeri dispari
    calcolaMediaSomma(numeri);

    return 0;
}