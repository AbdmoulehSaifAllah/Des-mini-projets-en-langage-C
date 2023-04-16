#include<stdio.h>
#include<stdlib.h>
int T[10000] ;
void aleatoire(int N,int T[])
{
  int i;
  for(i=0;i<N;i++)
  {
      T[i]=rand()%(30000-500+1)+500 ;
  }
}

void affichage1(int N ,int T[])
{
    int i;
    printf("les dix premiers elements du tableau sont : \n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",T[i]);
    }
    printf("les cinq derniers elements du tableau sont : \n");
    for(i=N;i>N-5;i--)
    {
        printf("%d\n",T[i]) ;
    }
}

void max_min(int N,int T[])
{
    int i,max,min ;
    max=T[0];
    min=T[0];
    for(i=1;i<N;i++)
    {
        if(T[i]>max)
        {
            max=T[i];
        }
        if(T[i]<min)
        {
            min=T[i];
        }
    }
    printf("la valeur maximale est :%d \n la valeur minimale est %d :",max,min);
}

void tri(int N,int T[])
{
    int i,y,X;
    y=0;
    do
    {
        for(i=0;i<N-1;i++)
        {
            if(T[i+1]<T[i])
            {
                X=T[i];
                T[i]=T[i+1];
                T[i+1]=X;
                y=1;
            }
        }
    }
    while(y!=0);

}

void affichage2(int N,int T[])
{
    int i;
    printf("les septs elements premiers apres tri sont :\n");
    for(i=0;i<7;i++)
    {
        printf("%d\n",T[i]) ;
    }
    printf("les trois derniers elements du tableau apres tri sont \n :");
    for(i=N;i>N-3;i--)
    {
        printf("%d\n",T[i]);
    }
}



main()
{
    int N;

    do
    {
        printf("saisir la taille maximale du tableau au maximum 10000 :\n");
        scanf("%d",&N);
    }
    while ((N<0)||(N>10000));
    if(N==0)
    {
        printf("le tableau est vide , aucune opertations sur le tableau \n");
    }
    else
    {
        aleatoire(N,T[N]);
        affichage1(N,T[N]);
        max_min(N,T[N]);
        tri(N,T[N]);
        affichage2(N,T[N]);

    }
}