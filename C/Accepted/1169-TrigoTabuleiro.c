#include <stdio.h>
 
int main()
{
	unsigned long long int casaTrigos, trigos;
	
	int testes, casas;
	
	scanf("%i", &testes);
	
	for (int i=0; i<testes; i++)
	{
		scanf("%i", &casas);
		
		for(int j=1; j<=casas; j++)
		{
			if (j==1)
			{
				trigos = 1;
				casaTrigos = 1;
			}
			else
			{
				casaTrigos *= 2;
				trigos += casaTrigos;
			}
		}
		
		unsigned long long int kg = 0;
		kg = (trigos/12)/1000;
		
		printf("%lli kg\n", kg);
	}

    return 0;
}