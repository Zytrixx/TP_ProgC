#include <stdio.h>

int main() {
    // Déclaration des variables
    int a = 2;  // Base
    int b = 3;  // Exposant
    int resultat = 1;  // Variable pour stocker le résultat

    // Utilisation d'une boucle for pour calculer la puissance
    for (int i = 1; i <= b; i++) {
        resultat *= a;  // Multiplication répétée de a
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d est égal à %d\n", a, b, resultat);

    return 0;
}
