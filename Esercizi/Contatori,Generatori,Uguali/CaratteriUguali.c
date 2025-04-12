#include <stdio.h>

#define DIMENSIONE_VETTORE 16

// Funzione per verificare se due vettori di caratteri sono uguali
int confrontaVettori(char vettore1[], char vettore2[]) {
    int i;
    for (i = 0; i < DIMENSIONE_VETTORE; i++) {
        if (vettore1[i] != vettore2[i]) {
            return 0; // I due vettori non sono uguali
        }
    }
    return 1; // I due vettori sono uguali
}

int main() {
    char codiceFiscale[] = "RCCLNZ07D13H096W";
    char vettore[DIMENSIONE_VETTORE];
    
    // Richiedi all'utente di inserire un vettore di 16 caratteri
    printf("Inserisci un vettore di 16 caratteri: ");
    scanf("%s", vettore);

    // Verifica se il vettore è uguale al codice fiscale specificato
    if (confrontaVettori(vettore, codiceFiscale)) {
        printf("Il vettore inserito corrisponde al codice fiscale.\n");
    } else {
        printf("Il vettore inserito non corrisponde al codice fiscale.\n");
    }

    return 0;
}