#include <stdlib.h>
#include <stdio.h>

int main () {
	int a , b , t ;
	printf("entrez les nombres \n");
	scanf("a = %d",&a);
	scanf("b = %d",&b);
	t=a;
	a=b;
	b=t;
	printf("a = %f \n b= %f",a,b );
	return 0 ;
}