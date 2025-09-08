#include<stdio.h>

int main (){
	
	int i , n , v ,t=0 ;
	
	printf("entrer la taille de tableau :");
	scanf("%d",&n);
	
	int tab[n];
	
	for (i = 0; i < n; i++) {
        printf("Donner le %d element:\n", i + 1);
        scanf("%d", &tab[i]);
    }
    
    printf("Donner la valeur de recherche : \n");
    scanf("%d",&v);
    
	for (i = 0; i < n; i++) {
		if(tab[i]== v){
            printf("Valeur %d trouvee a la position %d\n", v, i + 1);
			t = 1 ;	
		}
    }
        if (!t) {
        printf("Valeur %d non trouvee dans le tableau.\n", v);
    }
    
	return 0 ;
}
