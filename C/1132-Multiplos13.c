#include <stdio.h>
 
int main()
{
	int x, y, soma = 0;
	
	scanf("%i%i", &x, &y);
	
	if (y < x)
	{
		int aux = x;
		x = y;
		y = aux;
	}
	
	for (int i=x; i<=y; i++)
	{
		if (i % 13 == 0)
		{
			continue;
		}
		else
		{
			soma += i;
		}
	}
	
	printf("%i\n", soma);

    return 0;
}