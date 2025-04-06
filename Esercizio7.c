#include <stdio.h>

int main() {
    char carattere;

    do {
        printf("Inserisci 's' o 'n': ");
        scanf(" %c", &carattere); // Nota lo spazio prima di %c per ignorare spazi, newline, ecc.
    } while (carattere != 's' && carattere != 'n');

    printf("Hai inserito '%c'. Programma terminato.\n", carattere);

    return 0;
}