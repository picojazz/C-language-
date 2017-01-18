#include <stdlib.h>
#include <stdio.h>

int main () {
	char symbole;
	for ( symbole = 'A'; symbole <= 'Z'; symbole++)
	{
		printf("caractere = %c code = %d codeHexa = %x\n",symbole,symbole,symbole );
	}
	for ( symbole = '1'; symbole <= '9'; symbole++)
	{
		printf("caractere = %c code = %d codeHexa = %x\n",symbole,symbole,symbole );
	}
}