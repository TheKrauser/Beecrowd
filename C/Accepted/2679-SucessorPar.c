#include <stdio.h>
 
int main()
{
	int n;
	
	scanf("%i", &n);
	
	if ((n+1) % 2 == 0)
	{
		printf("%i\n", n+1);
	}
	else
	{
		printf("%i\n", n+2);
	}

    return 0;
}