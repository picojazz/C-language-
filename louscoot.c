#include <stdlib.h>
#include <stdio.h>

struct scooter
{
      char* modele;
      char* identification;
      int kilometrage;
      char* loue;
      
};

struct scooter scooters[6];

int main () {
      
	int choix, m=2;
	init();
	do{
            
      printf("* MENU *\t\t\tLOUSCOUT\n");
      printf("\t1 : Louer un scooter\n");
      printf("\t2 : Retour d'un scooter\n");
      printf("\t3 : Etat d'un scooter\n");
      printf("\t4 : Etat du parc de scooters\n");
      printf("\t0 : Fin du programme \n");
      printf("=>");
      scanf("%d",&choix);
      switch(choix){
      	case 1 : louer();

            system("pause");
      	    break;
      	case 2 : retour();
      	

            system("pause");
      		break;
      	case 3 : etatScooter();
      	

            system("pause");
      		break;
      	case 4 : resume();


            system("pause");
      	    break;
      	case 0 : printf("Aurevoir .....\n");
      	m=1;
      	
      }

      	system("cls");
	}while( m != 1);
	
	return 0 ;
}

void init(){
      scooters[0].modele="YAMAHA";
      scooters[0].identification="YAM80";
      scooters[0].kilometrage=1410;
      scooters[0].loue="Oui";

      scooters[1].modele="PIAGGIO";
      scooters[1].identification="PIA125";
      scooters[1].kilometrage=1220;
      scooters[1].loue="Non";

      scooters[2].modele="MBK";
      scooters[2].identification="MBK250";
      scooters[2].kilometrage=450;
      scooters[2].loue="Non";

      scooters[3].modele="GILERA";
      scooters[3].identification="GIL80";
      scooters[3].kilometrage=740;
      scooters[3].loue="Oui";

      scooters[4].modele="HONDA";
      scooters[4].identification="HON250";
      scooters[4].kilometrage=1800;
      scooters[4].loue="Oui";

      scooters[5].modele="SUZUKI";
      scooters[5].identification="SUZ80";
      scooters[5].kilometrage=50;
      scooters[5].loue="Oui";
}
void louer(){
      char  rech[8];
      int i,pos=-1;
      printf("Veuillez entrez le numero d'identification du scooter a louer (en majuscule) \n=>");
      scanf("%s",&rech);
      for ( i = 0; i < 6; i++)
      {
           if (strcmp(rech,scooters[i].identification) == 0)
           {
                 pos=i;
           }
      }
      if (pos == -1)
      {
            printf("Desolez ce scooter n existe pas ...\n");
      }else{
            if (strcmp(scooters[pos].loue,"Oui") == 0)
            {
                  printf("Desolez ce scooter est deja en location ...\n" );
            }else{
                  scooters[pos].loue = "Oui" ;
                  printf("Merci d avoir louer un de nos scooters ...\n" );
            }
      }
}
void retour(){
      char  rech[8];
      int i,pos=-1;
      printf("Veuillez entrez le numero d'identification du scooter a retouner (en majuscule) \n=>");
      scanf("%s",&rech);
      for ( i = 0; i < 6; i++)
      {
           if (strcmp(rech,scooters[i].identification) == 0)
           {
                 pos=i;
           }
      }
      if (pos == -1)
      {
            printf("Desolez ce scooter n existe pas ...\n");
      }else{
            if (strcmp(scooters[pos].loue,"Non") == 0)
            {
                  printf("Desolez ce scooter n etait pas en location\n" );
            }else{
                  int n;
                  printf("Veuillez entrer le nombre de kilometres effectues\n");
                  scanf("%d",&n);
                  scooters[pos].loue = "Non" ;
                  scooters[pos].kilometrage += n ;
                  printf("Merci !! scooter enregistre ...\n" );
                  
            }
      }
}
void etatScooter(){
      char  rech[8];
       int i,pos=-1;
      printf("Veuillez entrez le numero d'identification du scooter (en majuscule) \n=>");
      scanf("%s",&rech);
      for ( i = 0; i < 6; i++)
      {
           if (strcmp(rech,scooters[i].identification) == 0)
           {
                 pos=i;
           }
      }
      if (pos == -1)
      {
            printf("Desolez ce scooter n existe pas ...\n");
      }else{
            printf("modele\tnumero\tkilometrage\tloue\n");
            printf("%s\t%s\t%d\t\t%s\n",scooters[pos].modele,scooters[pos].identification,scooters[pos].kilometrage,scooters[pos].loue );
      }
}
void resume(){
      int i,a=0,n=0;
      printf("===== RESUME =====\n");
      printf("le nombre total de scooters est de : 6 \n");
       for ( i = 0; i < 6; i++)
      {
           if (strcmp("Oui",scooters[i].loue) == 0)
           {
                 a++;
           }
      }
      printf("le nombre de scooters en location est de : %d\n => ",a);
       for ( i = 0; i < 6; i++)
      {
           if (strcmp("Oui",scooters[i].loue) == 0)
           {
                 printf("%s\t", scooters[i].identification);
           }
      }
      printf("\nle nombre de scooters disponibles est de : %d\n => ",6-a);
       for ( i = 0; i < 6; i++)
      {
           if (strcmp("Non",scooters[i].loue) == 0)
           {
                 printf("%s\t", scooters[i].identification);
           }
      }
       for ( i = 0; i < 6; i++)
      {
           n += scooters[i].kilometrage;
      }
      printf("\nle kilometrage moyen de l'ensemble des scooters est de : %d km\n",n/6);
}
