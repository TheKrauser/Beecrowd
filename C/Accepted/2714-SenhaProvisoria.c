#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
	int repeticoes, tamanho, isPrinting;
	char ra[100];
	
	scanf("%i", &repeticoes);
	
	for(int i=0; i<repeticoes; i++)
	{
		scanf("%s", ra);
		tamanho = strlen(ra);
		isPrinting = 0;
		
		if (ra[0] != 'R' && ra[1] != 'A')
		{
			printf("INVALID DATA\n");
		}
		else
		{
			if ((tamanho - 2) != 18)
			{
				printf("INVALID DATA\n");
			}
			else
			{
				for(int j=2; j<tamanho; j++)
				{
					if (ra[j] == '0' && isPrinting == 0)
					{
						continue;
					}
					else
					{
						isPrinting = 1;
						printf("%c", ra[j]);
					}
				}
				printf("\n");
			}
		}
	}
    
    return 0;
}