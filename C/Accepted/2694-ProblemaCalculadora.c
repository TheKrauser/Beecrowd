#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int SomaPosicoes(char *, int, int); 

int main()
{
	char c[14];
	int repeticoes;
	int soma = 0;
	
	scanf("%i", &repeticoes);
	
	for (int i=0; i<repeticoes; i++)
	{
		scanf("%s", c);
		soma = 0;
		soma += SomaPosicoes(c, 2, 3);
		soma += SomaPosicoes(c, 5, 7);
		soma += SomaPosicoes(c, 11, 12);
		printf("%i\n", soma);
	}
 
    return 0;
}

int SomaPosicoes(char *c, int nMin, int nMax)
{
	int aux = 0;
	int mult = 0;
	
	for(int j=nMin; j<=nMax; j++)
	{
		if ((nMax - j) == 2)
		{
			mult = 100;
		}
		else if ((nMax - j) == 1)
		{
			mult = 10;
		}
		else
		{
			mult = 1;
		}
		
		aux += ((int)(c[j] - 48) * mult);
	}
	
	return aux;
}