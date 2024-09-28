#include <stdio.h>
 
int main()
{
	int n1, n2;
	scanf("%i %i", &n1, &n2);
	
	if (n2 > n1)
	{
		for (int i=n1+1; i<n2; i++)
		{
			if (i%5==2 || i%5==3)
			{
				printf("%i\n", i);
			}
		}
	}
	else
	{
		for (int i=n2+1; i<n1; i++)
		{
			if (i%5==2 || i%5==3)
			{
				printf("%i\n", i);
			}
		}
	}

    return 0;
}