#include <stdlib.h>
#include <stdio.h>
int afficheMatrice(int a[5][5]){
	int i,j;
	for ( i = 0; i < 5; ++i)
	{
		for ( j = 0; j < 5; j++)
		{
			printf("%d\t",a[i][j] );
			
		}
		printf("\n");
	}
}

int main () {
	int mat[5][5];
	int i,j;
	printf("Initialisation de la matrice de taille 5:\n");
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf("[%d][%d] = ",i+1,j+1 );
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nAffichage de la matrice de taille 5:\n\n");
	afficheMatrice(mat);
	system("pause");
	return 0 ;
}