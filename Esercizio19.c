#include <stdio.h>

int risolvi_equazione(float a, float b, float *x) {
    if (a == 0) {
        if (b == 0) {
            return 1; // Infinità di soluzioni
        } else {
            return 0; // Nessuna soluzione
        }
    } else {
        *x = b / a;
        return 1; // Una soluzione
    }
}

int main() {
    float a, b, x;
    printf("Inserisci il valore di a: ");
    scanf("%f", &a);
    printf("Inserisci il valore di b: ");
    scanf("%f", &b);

    int risultato = risolvi_equazione(a, b, &x);

    if (risultato == 1) {
        printf("La soluzione dell'equazione è x = %f\n", x);
    } else {
        printf("L'equazione non ha soluzioni.\n");
    }

    return 0;
}