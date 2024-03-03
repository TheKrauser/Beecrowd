#include <stdio.h>
 
int main()
{
	int n;
	
	scanf("%i", &n);
	if (n <= 800)
	{
		printf("1\n");
	}
	else if (n > 800 && n <=  1400)
	{
		printf("2\n");
	}
	else
	{
		printf("3\n");
	}

    return 0;
}