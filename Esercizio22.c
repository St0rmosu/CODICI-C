//Analisi

/*

    Obiettivo: Creare un codice che simuli la funzione della bilancia che calcola il prezzo di un articola di frutta e verdura,
    e stampare lo scontrino del prodotto scelto
    
    Dati in input: 
    Prezzo al kilo un array di tipo float                        => Questa variabile conterrà il prezzo al kg di ogni prodotto
    Codice del prodotto sara una variabile di tipo intero        => Conterra il ocdice del prodotto che si vuole scegliere 
    Peso sara una variabile di tipo float                        => Questa variabile conterra il valore della pesatura del prodotto scelto 
    Nome del Prodotto sarà un array di tipo char                 => Sara un array che conterrò il nome del prodotti
    

    Dati in output: 
    Prezzo *Prezzo al kilo sara un puntatore di tipo float       => Conterra il prezzo finale del prodotto scelto

    Ipotesi:
    Il codice del prodotto corrisponderà alla posizione del prodotto all'interno dell'array e il prezzo non deve essere mai negativo


    Funzioni: 
    1. Aggiornare l'array dei prezzi                             => Float Prezzokg[10]
    2. Pesare il prodotto (Inserire il peso del prodotto)        => for (int i; i < 10; i++){
                                                                      Printf("%s", "Inserisci il prezzo: ");
                                                                      scanf("%f",&Prezzokg);
                                                                    }
    3: Inserire il codice del prodotto
    4. Calcolare il prezzo finale
    5. Stampare lo scontrino

*/


#include <stdio.h>

int main() {
    char prodotti[10][20] = {"Mele", "Pere", "Banane", "Arance", "Fragole", 
                             "Zucchine", "Pomodori", "Melanzane", "Peperoni", "Cipolle"};
    float prezzi[10] = {2.3, 2.5, 1.8, 1.6, 4.0, 2.1, 2.5, 1.1, 1.15, 1.2};
    float totale = 0;
    int codice;
    float peso;
    char scelta[10][20];  // Array per memorizzare i prodotti scelti
    float quantita[10];    // Array per memorizzare il peso scelto di ogni prodotto
    int count = 0;         // Contatore per il numero di prodotti scelti

    printf("Benvenuto!\n");
    printf("----PRODOTTI----\n");

    // Stampa la lista dei prodotti con formattazione semplificata
    for (int i = 0; i < 10; i++) {
        printf("%d %s %.2f €/kg\n", i + 1, prodotti[i], prezzi[i]);
    }

    printf("\n");
    printf("----SCELTA----\n");

    // Ciclo per inserire la scelta dell'utente
    while (1) {
        printf("Inserisci il codice del prodotto (0 per terminare): ");
        scanf("%d", &codice);

        if (codice == 0) break;

        if (codice >= 1 && codice <= 10) {
            printf("Inserisci il peso del prodotto (in kg): ");
            scanf("%f", &peso);

            if (peso > 0) {
                // Memorizza la scelta
                snprintf(scelta[count], 20, "%s", prodotti[codice - 1]);
                quantita[count] = peso;
                totale += prezzi[codice - 1] * peso;
                count++;
            } else {
                printf("Peso non valido. Deve essere maggiore di 0. Riprova.\n");
            }
        } else {
            printf("Codice non valido. Riprova.\n");
        }
    }

    // Stampa dello scontrino
    printf("\n--------SCONTRINO--------\n");
    for (int i = 0; i < count; i++) {
        printf("%-15s %.2f kg  %.2f €\n", scelta[i], quantita[i], prezzi[i] * quantita[i]);
    }
    printf("-------------------------\n");
    printf("Totale acquisto: %.2f €\n", totale);
    printf("Grazie per l'acquisto!\n");

    return 0;
}