#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminante, radice1, radice2, parteReale, parteImmaginaria;

    printf("Inserisci i coefficienti a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        radice1 = (-b + sqrt(discriminante)) / (2 * a);
        radice2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Le radici sono reali e diverse.\n");
        printf("Radice 1 = %.2lf\n", radice1);
        printf("Radice 2 = %.2lf\n", radice2);
    } else if (discriminante == 0) {
        radice1 = -b / (2 * a);
        printf("Le radici sono reali e uguali.\n");
        printf("Radice 1 = Radice 2 = %.2lf\n", radice1);
    } else {
        parteReale = -b / (2 * a);
        parteImmaginaria = sqrt(-discriminante) / (2 * a);
        printf("Le radici sono complesse e diverse.\n");
        printf("Radice 1 = %.2lf + %.2lfi\n", parteReale, parteImmaginaria);
        printf("Radice 2 = %.2lf - %.2lfi\n", parteReale, parteImmaginaria);
    }

    return 0;
}