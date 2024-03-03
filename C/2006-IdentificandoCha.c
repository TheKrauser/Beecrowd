#include <stdio.h>

int main()
{
	int tipo, resp[5], cont = 0;
	
	scanf("%i", &tipo);
	scanf("%i%i%i%i%i", &resp[0], &resp[1], &resp[2], &resp[3], &resp[4]);
	
	for(int i=0; i<5; i++)
	{
		if (resp[i] == tipo)
		{
			cont++;
		}
	}
	
	printf("%i\n", cont);
 
    return 0;
}