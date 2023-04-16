#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char RIB[20] ;
    char nom[30] ;
    char prenom[30] ;
    char CIN[10] ;
    float Solde ;
}client ;

void saisie_clients(client *C,int n)
{
    int i;
    printf("Donner les informations necessaires des clients:\n");
    for(i=0;i<n;i++)
    {
        printf("client numero %d:\n",i+1);
        do
        {
            printf("saisir son RIB de taille maximale 20:\n");
            gets(C[i].RIB);
        }
        while(strlen(C[i].RIB>20)) ;

        printf("saisir son nom:\n");
        gets(C[i].nom);
        printf("saisir son prenom:\n");
        gets(C[i].prenom);
        printf("saisir son CIN:\n");
        gets(C[i].CIN);
        printf("saisir son solde:\n");
        scanf("%f",&Solde);
    }
}
void affiche_clients(client C[20], int T[20], int nbr)
{
    for(i=0;i<nbr;i++)
    {
        int i,X,y,j;
        X=T[i];
        j=0;
        y=0;
        do
        {
            if(X==j)
            {
                printf("les informations de client numero %d sont :\n",X);
                printf("Son RIB : %s\n",C[X].Rib);
                printf("Son nom : %s\n",C[X].nom);
                printf("Son prenom : %s\n",C[X].prenom);
                printf("Son CIN : %s\n",C[X].RIB);
                printf("Son solde: %f\n",C[X].Solde);
                y=1;
            }
            j++;
        }
        while((j<=n)&&(y!=1));
    }
}
int client_au_rouge(client C[20], int n, int T[20])
{
    int i,j,nb ;
    j=-1;
    nb=0;
    for(i=0;i<n;i++)
    {
        if(C[i].Solde<0)
        {
            j=j+1;
            T[j]=i ;
            nb++;
        }
    }
    return (nb) ;
}
main()
{
    do
    {
        printf("saisie le nombre maximal de clients dans la banque au maximum 20:\n");
        scanf("%d",&n);
    }
    while ((n<0)||(n>20));
    if (n==0)
    {
        printf("pas de clients dans la banque \n");
    }
    else
    {
        saisie_clients(C,n);
        x=client_au_rouge(C,n,T)
        printf("les clients ayant une solde negative sont :\n")
        for(i=0;i<x;i++)
        {
            y=T[i] ;
            printf("Son nom est %d\nSon prenom est: C[y].prenom\n"C[y].nom);
        }
    }




}