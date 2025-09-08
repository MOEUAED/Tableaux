#include <stdio.h>

int main() {
    int n, i, x, y;

    printf("Saisir la taille du tableau:\n");
    scanf("%d", &n);

    int tab[n];

    for (i = 0; i < n; i++) {
        printf("Donner le %d element:\n", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Donner la valeur a remplacer:\n");
    scanf("%d", &x);
    printf("Donner la nouvelle valeur:\n");
    scanf("%d", &y);

    for (i = 0; i < n; i++) {
        if (tab[i] == x) {
            tab[i] = y;
        }
    }

    printf("Tableau modifie: ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}

