#include <stdio.h>

int main() {
    int d = 0x10001000; // Exemple de valeur : bits 28 et 12 sont à 1

    // Masques pour les bits 28 (4ᵉ de gauche) et 12 (20ᵉ de gauche)
    int mask1 = 1 << 28;
    int mask2 = 1 << 12;

    // Vérification des deux bits
    if ((d & mask1) && (d & mask2)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
