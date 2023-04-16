#include <stdio.h>
# define N 30
main()
{
    FILE *F1,*F2,*F3 ;
    int NbTitre ;
    char ch1[128],ch2[128],FichierFusion[N] ;

  printf("saisir le nom du fichier ou va etre la fusion de deux premiers fichers :\n");
  gets(FichierFusion);

      F1=fopen("Article1.txt","r");
      F2=fopen("Article2.txt","r");
      F3=fopen(FichierFusion,"w") ;


      if(!F1)
      {
          printf("L\'ouverture en lecture du fichier Article1.txt est impossible!\n");
          perror("fopen");
      }
      if(!F2)
      {
          printf("L\'ouverture en lecture du fichier Article2.txt est impossible!\n");
          perror("fopen");
      }
     if(!F3)
      {
          printf("L\'ouverture en ecriture du fichier %s est impossible!\n",FichierFusion);
          perror("fopen");
      }

      NbTitre=0 ;
      while(!feof(F1))
      {
          fgets(ch1,128,F1);
          fputs(ch1,F3);
          fgets(ch2,128,F2);
          fputs(ch2,F3);
          fputs("\n",F3);
          NbTitre=NbTitre+2 ;
      }
      fclose(F1);
      fclose(F2);
      fputs("\n",F3);
      fprintf(F3,"%d",NbTitre);
      fclose(F3);



}