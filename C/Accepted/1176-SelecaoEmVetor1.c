#include <stdio.h>
 
int main()
{
	float a[100] = {0};
	int tamanho;
	
	tamanho = sizeof(a)/sizeof(a[0]);
	
	for(int i=0; i<tamanho; i++)
	{
		scanf("%f", &a[i]);
	}
	
	for (int i=0; i<tamanho; i++)
	{
		if (a[i] <= 10)
		{
			printf("A[%i] = %.1f\n", i, a[i]);
		}
	}

    return 0;
}