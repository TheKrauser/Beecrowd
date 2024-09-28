#include <stdio.h>
 
int main()
{
	int n1, n2;
	unsigned long long int fat1 = 0, fat2 = 0, soma = 0;
	
	while(scanf("%i %i", &n1, &n2) != EOF)
	{
		if (n1 == 0)
		{
			fat1 = 1;
		}
		else
		{
			for (int i=n1; i>1; i--)
			{		
				if (i == n1)
				{
					fat1 = i * (i-1);
				}
				else
				{
					fat1 = fat1 * (i-1);
				}
			}
		}
		
		if (n2 == 0)
		{
			fat2 = 1;
		}
		else
		{
			for (int i=n2; i>1; i--)
			{		
				if (i == n2)
				{
					fat2 = i * (i-1);
				}
				else
				{	
					fat2 = fat2 * (i-1);
				}
			}
		}
		soma = fat1 + fat2;
		printf("%lli\n", soma);
	}
	
	

    return 0;
}