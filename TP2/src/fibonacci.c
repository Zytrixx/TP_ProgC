#include <stdio.h>

int main() {
    int n;
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    int a = 0, b = 1, next, i;

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(", %d", b);
        } else {
            next = a + b;
            printf(", %d", next);
            a = b;
            b = next;
        }
    }

    printf("\n");
    return 0;
}
