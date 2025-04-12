#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int numeritotali = 5; // Numero totale di numeri generati
    float percentuale = 0.0f; // Percentuale temporanea
    float somma = 0.0f; // Somma delle percentuali

    // Genera i numeri e calcola le percentuali
    for(int i = 0; i < numeritotali; i++){
        int numero = rand() % 100;
        percentuale = ((float)(i + 1) / numeritotali) * 100; // Calcola la percentuale
        somma += percentuale;
    }

    float PercentualeMedia = somma / numeritotali; // Calcola la media delle percentuali
    printf("Media delle percentuali: %.2f%%\n", PercentualeMedia);

    return 0;
}
