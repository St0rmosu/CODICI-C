#include <stdio.h>

// Funzione per convertire una stringa da minuscolo a maiuscolo
void convertiInMaiuscolo(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

// Funzione per convertire una stringa da maiuscolo a minuscolo
void convertiInMinuscolo(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}

int main() {
    char stringaMaiuscola[] = "ciao mondo";
    char stringaMinuscola[] = "CIAO MONDO";

    printf("Stringa originale (minuscola): %s\n", stringaMaiuscola);
    convertiInMaiuscolo(stringaMaiuscola);
    printf("Stringa convertita in maiuscolo: %s\n", stringaMaiuscola);

    printf("Stringa originale (maiuscola): %s\n", stringaMinuscola);
    convertiInMinuscolo(stringaMinuscola);
    printf("Stringa convertita in minuscolo: %s\n", stringaMinuscola);

    return 0;
}