#include <stdio.h>

int main() {
    int numero_alunni, i, eta_massima, conteggio = 0;

    printf("Inserisci il numero di alunni: ");
    scanf("%d", &numero_alunni);

    int eta[numero_alunni];

    printf("Inserisci le età degli alunni:\n");
    for (i = 0; i < numero_alunni; i++) {
        scanf("%d", &eta[i]);
    }

    eta_massima = eta[0];
    for (i = 1; i < numero_alunni; i++) {
        if (eta[i] > eta_massima) {
            eta_massima = eta[i];
        }
    }

    for (i = 0; i < numero_alunni; i++) {
        if (eta[i] == eta_massima) {
            conteggio++;
        }
    }

    printf("L'età maggiore è %d e appare %d volte.\n", eta_massima, conteggio);

    return 0;
}