#include <stdio.h>

int main() {
    int n, i, max ;

    printf("Entrer la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
	
	for (i = 0; i < n; i++) {
    	printf("Entrer la valeur %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    max = tab[0];
    for (i = 1; i < n; i++) {
    	if (tab[i]>max){
    		max = tab[i];
		}
	}
	printf("maximum de tableau est : %d ", max);
	

    return 0;
}

