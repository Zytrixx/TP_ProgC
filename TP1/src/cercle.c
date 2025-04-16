#include <stdio.h>
#include <math.h> // Pour M_PI

int main() {
    double rayon = 5.0; // Tu peux modifier cette valeur

    // Calcul de l'aire et du périmètre
    double aire = M_PI * rayon * rayon;
    double perimetre = 2 * M_PI * rayon;

    // Affichage des résultats
    printf("Rayon du cercle : %.2f\n", rayon);
    printf("Aire du cercle : %.2f\n", aire);
    printf("Périmètre du cercle : %.2f\n", perimetre);

    return 0;
}
