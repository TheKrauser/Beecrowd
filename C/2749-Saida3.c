#include <stdio.h>

void Tracos(int quantity);
void Espacos(int quantity);
void PrintX(int quantity, int position);

int main()
{
	Tracos(39);
	PrintX(39, 2);
	Espacos(39);
	PrintX(39, 17);
	Espacos(39);
	PrintX(39, 33);
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

void PrintX(int quantity, int position)
{
	for(int i=0; i<quantity; i++)
	{
		if (i==0 || i==quantity-1)
		{
			printf("|");
		}
		else
		{
			if (i==position-1)
			{
				printf("x = 35");
				i+=5;
				continue;
			}
			else
			{
				printf(" ");
			}
		}
	}
	printf("\n");
}