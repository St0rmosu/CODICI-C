#include <stdio.h>

int main() {
    int offerta1 = -1, offerta2 = -1;
    int compratore1 = 1, compratore2 = 2;
    int turno = 1;
    int vincitore = 0;
    int cifra_vincente = 0;

    while (1) {
        if (turno == 1) {
            printf("Compratore %d, inserisci la tua offerta (0 per ritirarti): ", compratore1);
            scanf("%d", &offerta1);

            if (offerta1 == 0) {
                vincitore = compratore2;
                cifra_vincente = offerta2;
                break;
            }
            turno = 2;
        } else {
            printf("Compratore %d, inserisci la tua offerta (0 per ritirarti): ", compratore2);
            scanf("%d", &offerta2);

            if (offerta2 == 0) {
                vincitore = compratore1;
                cifra_vincente = offerta1;
                break;
            }
            turno = 1;
        }
    }

    printf("L'asta è stata vinta dal Compratore %d con l'offerta di %d euro.\n", vincitore, cifra_vincente);

    return 0;
}
