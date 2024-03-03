#include <stdio.h>

void Tracos(int quantity);
void Espacos(int quantity);

int main()
{
	Tracos(39);
	Espacos(39);
	Espacos(39);
	Espacos(39);
	Espacos(39);
	Espacos(39);
	Tracos(39);
	
    return 0;
}

void Tracos(int quantity)
{
	for(int i=0; i<quantity; i++)
	{
		printf("-");
	}
	printf("\n");
}

void Espacos(int quantity)
{
	for(int i=0; i<quantity; i++)
	{
		if (i==0 || i==quantity-1)
		{
			printf("|");
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
}