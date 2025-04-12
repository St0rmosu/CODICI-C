#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inizializza il generatore di numeri casuali con il tempo corrente
    srand(time(NULL));

    // Genera un numero casuale compreso tra 1 e 10
    int numero_generato = rand() % 10 + 1;
    int tentativi_rimasti = 3;
    int numero_inserito;
    int indovinato = 0; // Flag per controllare se l'utente ha indovinato

    printf("Indovina il numero tra 1 e 10! Hai 3 tentativi.\n");

    while (tentativi_rimasti > 0 && !indovinato) {
        // Chiede all'utente di inserire un numero
        printf("Tentativo rimasto: %d\n", tentativi_rimasti);
        printf("Inserisci un numero: ");
        scanf("%d", &numero_inserito);

        // Confronta il numero inserito con il numero generato
        if (numero_inserito < numero_generato) {
            printf("Il numero inserito è minore del numero generato.\n");
        } else if (numero_inserito > numero_generato) {
            printf("Il numero inserito è maggiore del numero generato.\n");
        } else {
            // Se il numero inserito è uguale al numero generato, l'utente ha indovinato
            printf("Complimenti! Hai indovinato il numero.\n");
            indovinato = 1; // Imposta il flag per indicare che l'utente ha indovinato
        }

        // Riduci il numero di tentativi rimasti
        tentativi_rimasti--;
    }

    if (!indovinato) {
        // Se l'utente non ha indovinato dopo tutti i tentativi
        printf("Mi dispiace, hai esaurito i tentativi. Il numero corretto era: %d\n", numero_generato);
    }

    return 0;
}

//La strategia migliore per vincere sempre a questo gioco in 3 tentativi secondo me è iniziare nel mezzo dell'intervallo ovvero scegliere il numero 5 e adattarsi alla scelta che da il programma cosi da ridurrre ancora di più l'intervallo