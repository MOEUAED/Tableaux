#include <stdio.h>

int main() {
    int i, n;

    printf("Saisir la taille du tableau:\n");
    scanf("%d", &n);

    int tab[n];
    int t[n];


    for (i = 0; i < n; i++) {
        printf("Donner le %d element:\n", i + 1);
        scanf("%d", &tab[i]);
        t[i] = tab[i]; 
    }

    printf("Le premier tableau est: ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    printf("\nLe deuxieme tableau est: ");
    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }

    return 0;
}

