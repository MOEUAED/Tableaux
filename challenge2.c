#include <stdio.h>

int main(){
	int n ,i ;
	
	printf("entrer la taille de tableau : ");
	scanf("%d",&n);
	
	int tab[n] ;
	for (i = 0; i < n; i++) {
		printf("entrer le contenue de tableau : ");
        scanf("%d", &tab[i]);
    }

    printf("Contenu du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", tab[i]);
    }
	
	return 0 ;
}

