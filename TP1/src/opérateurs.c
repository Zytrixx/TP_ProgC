#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérations arithmétiques
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;

    // Affichage des opérations arithmétiques
    printf("Addition (a + b) : %d\n", addition);
    printf("Soustraction (a - b) : %d\n", soustraction);
    printf("Multiplication (a * b) : %d\n", multiplication);
    printf("Division (a / b) : %d\n", division);
    printf("Modulo (a %% b) : %d\n", modulo); // %% pour afficher %

    // Comparaisons logiques (affichées comme booléens : 0 = faux, 1 = vrai)
    int egal = (a == b);
    int superieur = (a > b);

    printf("a est-il égal à b ? : %d\n", egal);
    printf("a est-il supérieur à b ? : %d\n", superieur);

    return 0;
}
