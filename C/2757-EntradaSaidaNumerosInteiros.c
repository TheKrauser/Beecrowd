#include <stdio.h>
#include <stdlib.h>

void EspacoEsquerda(int n, int tipo);
void EspacoDireita(int n);
int CalcularDigitos(int n);

int main()
{
	int v1, v2, v3;
	scanf("%d %d %d", &v1, &v2, &v3);
	
	printf("A = %d, B = %d, C = %d\n", v1, v2, v3);
	
	printf("A = ");
	EspacoEsquerda(v1, 1);
	printf(", B = ");
	EspacoEsquerda(v2, 1);
	printf(", C = ");
	EspacoEsquerda(v3, 1);
	printf("\n");
	
	printf("A = ");
	EspacoEsquerda(v1, 0);
	printf(", B = ");
	EspacoEsquerda(v2, 0);
	printf(", C = ");
	EspacoEsquerda(v3, 0);
	printf("\n");
	
	printf("A = ");
	EspacoDireita(v1);
	printf(", B = ");
	EspacoDireita(v2);
	printf(", C = ");
	EspacoDireita(v3);
	printf("\n");
	
	
	return 0;
}

//0 = zero
//1 = espaços
void EspacoEsquerda(int n, int tipo)
{
	int nAbs = abs(n);
	int digitos = CalcularDigitos(nAbs);
	
	for (int i=0; i<10; i++)
	{
		if (n < 0 && i == 0)
		{
			if (tipo == 0)
			{
				printf("-");
				continue;
			}
			else
			{
				continue;
			}
		}
		
		if (i + digitos == 10)
		{
			if (tipo == 0)
			{
				printf("%i", nAbs);
			}
			else
			{
				printf("%i", n);
			}
		
			i+=digitos;
			continue;
		}
		else
		{
			if (tipo == 0)
			{
				printf("0");
			}
			else
			{
				printf(" ");
			}
		}
	}
}

void EspacoDireita(int n)
{
	int nAbs = abs(n);
	int digitos = CalcularDigitos(nAbs);
	
	printf("%i", n);
	
	if (n < 0)
		digitos+=1;
	
	for (int i=digitos; i<10; i++)
	{
		printf(" ");
	}
}

int CalcularDigitos(int n)
{
	int digitos;
	
	if (n < 10)
	{
		digitos = 1;
	}
	else if (n >= 10 && n < 100) 
	{
		digitos = 2;
	}
	else if (n >= 100 && n < 1000)
	{
		digitos = 3;
	}
	else if (n >= 1000 && n < 10000)
	{
		digitos = 4;
	}
	else
	{
		digitos = 5;
	}
	
	return digitos;
}