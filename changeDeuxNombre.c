#include <stdlib.h>
#include <stdio.h>

int main () {
	int a , b , t ;
	printf("entrez les nombres \n");
	scanf("%d",&a);
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("a = %d \n b= %d",a,b );
	return 0 ;
}
