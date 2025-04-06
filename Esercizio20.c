#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Punto;

Punto acquisisciPunto() {
    Punto p;
    printf("Inserisci la coordinata x: ");
    scanf("%f", &p.x);
    printf("Inserisci la coordinata y: ");
    scanf("%f", &p.y);
    return p;
}

float calcolaDistanza(Punto p1, Punto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Punto punto1, punto2;
    printf("Acquisizione del primo punto:\n");
    punto1 = acquisisciPunto();
    printf("Acquisizione del secondo punto:\n");
    punto2 = acquisisciPunto();

    float distanza = calcolaDistanza(punto1, punto2);
    printf("La distanza tra i due punti è: %.2f\n", distanza);

    return 0;
}