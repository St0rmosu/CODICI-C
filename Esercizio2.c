#include <stdio.h>

int main() {
    int numero1, numero2;

    // Richiedi all'utente di inserire due numeri
    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    // Verifica se il secondo numero è zero
    if (numero2 == 0) {
        printf("Errore: Divisione per zero. Il programma verrà interrotto.\n");
        return 1; // Termina il programma con un codice di errore
    }

    // Effettua la divisione e stampa il risultato
    float risultato = (float)numero1 / numero2;
    printf("%d diviso %d è uguale a %.2f\n", numero1, numero2, risultato);

    return 0;
}