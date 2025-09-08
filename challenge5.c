#include <stdio.h>

int main() {
    int n, i, min ;

    printf("Entrer la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
	
	for (i = 0; i < n; i++) {
    	printf("Entrer la valeur %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    min = tab[0];
    for (i = 1; i < n; i++) {
    	if (tab[i]<min){
    		min = tab[i];
		}
	}
	printf("minimum de tableau est : %d ", min);
	

    return 0;
}

