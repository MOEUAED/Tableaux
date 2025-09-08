#include <stdio.h>
int main (){
    int x,i,n;
    printf("saisir la taille du tableau:\n");
    scanf("%d",&n);
    int tab[n];
    
    for ( i = 0; i < n; i++)
    {
      printf("donner le %d element:\n",i+1);
      scanf("%d",&tab[i]);
    }
    printf("donner le factorielle :\n");
      scanf("%d",&x);

      int tab_fac[n];
      for (i = 0; i < n; i++)
    {
     tab_fac[i]=tab[i]*x;
    }
    for (i = 0; i < n; i++)
    {
        printf("le produit du element original %d avec le facteur %d est : %d\n",tab[i],x,tab_fac[i]);
    }

    return 0;
}
