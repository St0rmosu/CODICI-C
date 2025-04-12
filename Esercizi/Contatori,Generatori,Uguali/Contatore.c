//Il programma deve acquaisire dei numeri interi in un ciclo e se si mette un numero che sia minore di quello precedente il cilo si ferma

#include <stdio.h>

int main() {
    int numero, numeroprecedente, contatore = 0;
    
    printf("Inserisci una serie di numeri (inserisci un numero negativo per terminare):\n");
    
    // Leggi il primo numero
    scanf("%d", &numero);
    
    // Inizializza il numero precedente
    numeroprecedente = numero;
    
    // Incrementa il contatore
    contatore++;
    
    // Leggi i successivi numeri fino a quando viene inserito un numero negativo
    while (numero >= 0) {
        // Leggi il numero successivo
        scanf("%d", &numero);
        
        // Verifica se sono consecutivi o se il numero è minore di quello precedente
        if (numero == numeroprecedente + 1) {
            // Sono consecutivi, continua
            numeroprecedente = numero;
            contatore++;
        } else if (numero < numeroprecedente) {
            // Numero minore, termina il programma
            printf("Hai inserito un numero minore del precedente.\n");
            break;
        } else if (numero == numeroprecedente) {
            // Numero uguale, continua
            contatore++;
        }
    }
    
    // Mostra quanti numeri sono stati inseriti
    printf("Hai inserito un totale di %d numeri.\n", contatore);

    return 0;
}