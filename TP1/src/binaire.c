#include <stdio.h>

void afficherBinaire(unsigned int n) {
    // On suppose que int = 32 bits
    int i;
    int started = 0; // Pour ne pas afficher les zéros non significatifs

    for (i = sizeof(n) * 8 - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit == 1) started = 1;
        if (started) {
            printf("%d", bit);
        }
    }

    if (!started) {
        // Si n == 0, on affiche quand même un 0
        printf("0");
    }
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("Décimal : %u → Binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
        printf("\n");
    }

    return 0;
}
