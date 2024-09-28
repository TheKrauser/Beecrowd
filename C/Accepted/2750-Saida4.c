#include <stdio.h>

void Tracos(int quantity);
void Espacos(int quantity);
void Titulos();
void Variaveis(int v);

int main()
{
	int a=0, b=1, c=2, d=3, e=4, f=5, g=6, h=7, i=8, j=9, k=10, l=11, m=12, n=13, o=14, p=15;
	
	Tracos(39);
	Titulos();
	Tracos(39);
	Variaveis(a);
	Variaveis(b);
	Variaveis(c);
	Variaveis(d);
	Variaveis(e);
	Variaveis(f);
	Variaveis(g);
	Variaveis(h);
	Variaveis(i);
	Variaveis(j);
	Variaveis(k);
	Variaveis(l);
	Variaveis(m);
	Variaveis(n);
	Variaveis(o);
	Variaveis(p);
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

void Titulos()
{
	for (int i=0; i<39; i++)
	{
		if (i==0 || i==12 || i==22 || i==38)
		{
			printf("|");
		}
		else if (i==3)
		{
			printf("decimal");
			i+=6;
		}
		else if (i==15)
		{
			printf("octal");
			i+=4;
		}
		else if (i==25)
		{
			printf("Hexadecimal");
			i+=10;
		}
		else
		{
			printf(" ");
		}
	}
	
	printf("\n");
}

void Variaveis(int v)
{
	for (int i=0; i<39; i++)
	{
		if (i==0 || i==12 || i==22 || i==38)
		{
			printf("|");
		}
		else if (i==7 && v<10)
		{
			printf("%i ", v);
			i++;
		}
		else if (i==6 && v>9)
		{
			printf("%i ", v);
			i+=2;
		}
		else if (i==17 && v<=8)
		{
			printf("%o ", v);
			i++;			
		}
		else if (i==16 && (v==8 || v==9 || v>9))
		{
			printf("%o ", v);
			i+=2;			
		}
		else if (i==30)
		{
			printf("%X", v);;
		}
		else
		{
			printf(" ");
		}
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