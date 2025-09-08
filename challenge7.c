#include <stdio.h>
int main (){
    int i,j,n;
    printf("saisir la taille du tableau:\n");
    scanf("%d",&n);
    int tab[n];
    
    for ( i = 0; i < n; i++)
    {
      printf("donner le %d element:\n",i+1);
      scanf("%d",&tab[i]);
    }
    
    int ordr ;
    for (i=0; i< n-1 ; i++){
    	    for ( j = 0; j < n - 1 - i; j++) {
            	if (tab[j] > tab[j + 1]) {
                	ordr = tab[j];
                	tab[j] = tab[j + 1];
                	tab[j + 1] = ordr;
            }
        }
	}
    
    printf("Tableau trie en ordre croissant :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");


    return 0;
}
