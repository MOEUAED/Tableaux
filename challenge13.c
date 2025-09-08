#include <stdio.h>

int main() {
    int n, i;

    printf("Saisir la taille du tableau:\n");
    scanf("%d", &n);

    int tab[n];

    for (i = 0; i < n; i++) {
        printf("Donner le %d element:\n", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Nombres impairs: ");
    for (i = 0; i < n; i++) {
        if (tab[i] % 2 != 0) {
            printf("%d ", tab[i]);
        }
    }

    return 0;
}

