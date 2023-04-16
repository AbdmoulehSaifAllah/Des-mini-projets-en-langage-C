#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,n1,n2,n3,x,i,s ;
  printf("saisr un entier:\n");
  scanf("%d",&n1) ;
  n3=n1;
  do
  {
  printf("\n1.palindrome?\n2.parfait?\npour quitter appuyer -1\nentrez votre choix :")  ;
  scanf("%d",&x) ;
  }
  while ((x!=1)&&(x!=2)&&(x!=-1)) ;
  if(x==1)
  {
     n=0;
    do
    {
         n2=n1%10 ;
         n1=n1/10 ;
        n=(n*10)+n2 ;
    }
    while (n1!=0) ;
  if(n==n3)
    {
       printf("\n%d est palindrome\n",n3) ;
    }
    else
    {
        printf("\n%d est non palindrome\n",n3) ;
    }
    printf("\nun nouveau choix doit etre saisi\n") ;
 do
  {
  printf("pour parfait tapez 2 :")  ;
  scanf("%d",&x) ;
  }
  while (x!=2);
   s=0 ;
   for(i=1;i<=(n3/2);i++)
   {
      if((n3%i)==0)
      {
          s+=i ; //s=s+i ;
      }
   }
     if (s==n3)
     {
         printf("\n%d est parfait\n",n3) ;
     }
     else
     {
         printf("\n%d est non parfait\n",n3) ;
     }
   do
     {
         printf("\npour quitter appuyer -1 \n") ;
         scanf("%d",&x) ;
     }
     while (x!=-1) ;
  }
else
    if(x==2)
  {
    s=0;
   for(i=1;i<=(n3/2);i++)
   {
      if((n3%i)==0)
      {
          s=s+i ;
     }
   }
     if (s==n3)
     {
         printf("\n%d est parfait\n",n3) ;
     }
     else
     {
         printf("\n%d est non parfait\n",n3) ;
     }
     printf("\nun nouveau choix doit etre saisi\n") ;

       do
  {
  printf("pour palindrome tapez 1 :")  ;
  scanf("%d",&x) ;
  }
  while (x!=1) ;
  n=0;
    do
    {
         n2=n1%10 ;
         n1=n1/10 ;
        n=(n*10)+n2 ;
    }
    while (n1!=0) ;
    if(n==n3)
    {
       printf("\n%d est palindrome\n",n3) ;
    }
    else
    {
        printf("\n%d est non palindrome\n",n3) ;
    }
    do
     {
         printf("\npour quitter appuyer -1\n") ;
         scanf("%d",&x) ;
     }
     while (x!=-1) ;
  }
}

