#include <stdio.h>
#include <math.h>

int main() {
    char numeroBinario[9]; // Array per memorizzare il numero binario a 8 bit
    int numeroDecimale = 0; // Variabile per memorizzare il numero decimale

    printf("Inserisci un numero binario di 8 bit: ");
    scanf("%8s", numeroBinario);

    // Conversione da binario a decimale
    for (int i = 0; i < 8; i++) {
        if (numeroBinario[i] == '1') {
            numeroDecimale += pow(2, 7 - i);
        }
    }

    printf("Il numero decimale è: %d\n", numeroDecimale);

    return 0;
}