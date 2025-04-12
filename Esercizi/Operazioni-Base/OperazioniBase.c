#include <stdio.h>

int main() {
    int numero1, numero2;

    // Richiedi all'utente di inserire due numeri
    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    // Calcola la somma, la differenza e la moltiplicazione
    int somma = numero1 + numero2;
    int differenza = numero1 - numero2;
    int moltiplicazione = numero1 * numero2;

    // Stampa i risultati
    printf("Somma: %d\n", somma);
    printf("Differenza: %d\n", differenza);
    printf("Moltiplicazione: %d\n", moltiplicazione);

    return 0;
}