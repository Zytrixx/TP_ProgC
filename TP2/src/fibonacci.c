#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre de termes de la suite de Fibonacci à afficher : ");
    scanf("%d", &n);

    int a = 0, b = 1, i;

    for (i = 0; i < n; i++) {
        if (i == 0) 
            printf("%d", a);
        else if (i == 1)
            printf(", %d", b);
        else {
            int next = a + b;
            printf(", %d", next);
            a = b;
            b = next;
        }
    }

    printf("\n");
    return 0;
}
