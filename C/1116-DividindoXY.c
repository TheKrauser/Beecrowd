#include <stdio.h>

int main()
{
	int x, y, repeticoes;
	float result;
	
	scanf("%i", &repeticoes);
	
	for(int i=0; i<repeticoes; i++)
	{
		scanf("%i %i", &x, &y);
		
		if (y == 0)
		{
			printf("divisao impossivel\n");
		}
		else
		{
			result = (float)x/y;
			printf("%.1f\n", result);
		}
	}
	
    return 0;
}