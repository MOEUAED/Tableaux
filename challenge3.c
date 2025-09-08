#include <stdio.h>

int main() {
    int n, i, somme = 0;

    printf("Entrer la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];

    for (i = 0; i < n; i++) {
        printf("Entrer la valeur %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < n; i++) {
        somme = somme + tab[i];
    }

    printf("La somme des elements du tableau est : %d\n", somme);

    return 0;
}

