#include <stdlib.h>
#include <stdio.h>
void inverser(char* mot){
	int i,l,j ;
	l = strlen(mot);
	char inv[l];
	for ( i = l; i >= 0; i--)
	{
		putchar(mot[i]);
	}
	

}

int main () {
	int choix, m=2;
	char mot[25] = "zee";
	do{
      printf("========= Menu =============\n");
      printf("1 => Saisir un mot\n");
      printf("2 => Afficher le mot\n");
      printf("3 => Inverser le mot\n");
      printf("4 => nombre de caractere \n");
      printf("5 => Quitter \n");
      scanf("%d",&choix);
      switch(choix){
      	case 1 : printf("Entrez un mot :");
      	         scanf("%s",&mot);
      	         system("pause");
      	    break;
      	case 2 : if (strcmp(mot,"zee") == 0)
      	            {
      	            	printf("veuillez saisir un mot d'abord ..\n");
      	            	system("pause");
      	            }else{
      	            	printf("le mot saisie est : %s \n",mot);
      	            	system("pause");
      	            }
      	
      		break;
      	case 3 : if (strcmp(mot,"zee") == 0)
      	            {
      	            	printf("veuillez saisir un mot d'abord ..\n");
      	            	system("pause");
      	            }else{
      	            	printf("L'inverse du mot :");
      			 		inverser(mot);
      			 		printf("\n");
      			 		system("pause");
      	            }
      	
      		break;
      	case 4 : if (strcmp(mot,"zee") == 0)
      	            {
      	            	printf("veuillez saisir un mot d'abord ..\n");
      	            	system("pause");
      	            }else{
      	            	printf("Le nombre de caractere est : %d\n",strlen(mot) );
      	            	system("pause");
      	            }
      	    break;
      	case 5 : printf("Aurevoir .....\n");
      	m=1;
      	
      }

      	system("cls");
	}while( m != 1);
	
	return 0 ;
}