#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int reference;
    float prix;

}produit;

void RechercheProduit(int ref,produit *T,int n )
{
    int i,x ;
    i=0;
    x=0;
    do
    {
        if((T[i].reference)==ref)
        {
          x=1;
        }
        i++ ;
    }

    while((i<=n)&&(x!=1));
    if(x==1)
    {
        printf("Le prix du produit est :%.2f , son position dans le tableau est :%d \n",T[i-1].prix,i-1);
    }
    else
    {
        printf("-1\n");
    }
}
main()
{
    produit *T;
    int i,n,ref;
    do
    {
        printf("Saisir le nombre de produits dans un magasin :\n");
        scanf("%d",&n);
    }
    while (n<0);

    if (n==0)
    {
        printf("pas de produit dans le magasin !\n");
    }
    else
    {
        T=malloc(n * sizeof(int));
        printf("Donner les informations necessaires des  produits :\n");
        for(i=0;i<n;i++)
        {  
            printf("produit numero %d :\n",i+1);
            printf("Saisir sa reference :\n");
            scanf("%d",&T[i].reference);
            do
            {
                printf("Saisir son prix :\n");
                scanf("%f",&T[i].prix);
            }
            while (T[i].prix<=0);
        }
    }
    printf("pour chercher un produit\nSaisir sa reference :\n");
    scanf("%d",&ref);
    RechercheProduit(ref,T,n);


}