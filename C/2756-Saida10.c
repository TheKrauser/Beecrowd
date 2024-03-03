#include <stdio.h>
 
void ColocaCaracter(char caracter, int esp1, int esp2);
 
int main()
{
	ColocaCaracter('A', 7, 0);
	ColocaCaracter('B', 6, 1);
	ColocaCaracter('C', 5, 3);
	ColocaCaracter('D', 4, 5);
	ColocaCaracter('E', 3, 7);
	ColocaCaracter('D', 4, 5);
	ColocaCaracter('C', 5, 3);
	ColocaCaracter('B', 6, 1);
	ColocaCaracter('A', 7, 0);

    return 0;
}

void ColocaCaracter(char caracter, int esp1, int esp2)
{
	for (int i=0; i<esp1+1; i++)
	{
		if (i==esp1)
		{
			printf("%c", caracter);
		}
		else
		{
			printf(" ");
		}
	}
	
	if (esp2 != 0)
	{
		for (int j=0; j<esp2+1; j++)
		{
			if (j==esp2)
			{
				printf("%c", caracter);
			}
			else
			{
				printf(" ");
			}
		}
	}
	printf("\n");
}