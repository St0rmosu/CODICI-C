//traccia

/*
Dichiarare due variabili intere, e due puntatori coerenti. 
Puntare a tali variabili, quindi verificare che i due indirizzi sono differenti fra loro, mediante un semplice confronto fra i puntatori .
Stampare quale valore è maggiore e quale minore
Invertire i valori
*/

#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int *puntatore1 = &a;
    int *puntatore2 = &b;

    // Verifica se i due puntatori sono differenti
    if (puntatore1 != puntatore2) {
        printf("I due puntatori sono differenti\n");

        // Stampa quale valore è maggiore
        if (a > b) {
            printf("Il valore maggiore è %d\n", a);
        } else {
            printf("Il valore maggiore è %d\n", b);
        }

        // Stampa quale valore è minore
        if (a < b) {
            printf("Il valore minore è %d\n", a);
        } else {
            printf("Il valore minore è %d\n", b);
        }

    }
    
    // Inverte i valori
    int temp = *puntatore1;
    *puntatore1 = *puntatore2;
    *puntatore2 = temp;

    printf("\nValori invertiti:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}
