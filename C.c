#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <time.h>

#define TRUE  1
#define FALSE 0

#define MIN( a, b ) ((a)<(b) ?  (a) : (b))
#define MAX( a, b ) ((a)>(b) ?  (a) : (b))
#define ABS( a ) 	((a)< 0  ? -(a) : (a))
#define IMPAR( a )	((a)&1)
//CHAR para INT
#define CTOI( a )	((a) - '0')
//INT para CHAR
#define ITOC( a )	((a) + '0')

#define MAX_TAM 100000

//Função do Quick Sort para INT
int Compara(const void * a, const void * b)
{
    int *p1 = (int*)a;
    int *p2 = (int*)b;

    if (*p1 < *p2)
        return -1;
    else if (*p1 == *p2)
        return 0;
    else
        return 1;
}

//Definindo STRUCT
typedef struct
{
    char numero[201];
} Telefone;

//Função do Quick Sort para STRING
int Compara(const void *a, const void *b)
{
    Telefone *i, *j;

    i = (Telefone *)a;
    j = (Telefone *)b;

    int aux = strcmp(i->numero, j->numero);

    if (aux == 0)
        return 0;
    else if (aux < 0)
        return 1;
    else
        return -1;
}

Ordem Crescente
< 0	    [elem1] é menor que     [elem2]
0	    [elem1] é equivalente a [elem2]
> 0	    [elem1] é maior que     [elem2]

//Chamada da Função
qsort(vetorQueVaiOrdenar, numeroDeElementos, tamanhoDeCadaElemento, Compara);

//Receber as entradas até um End of File
while(scanf("%i %i", &n1, &n2) != EOF)
{

}

//Receber a string inteira mesmo após o espaço e não imprimir um \n na hora do ENTER
//(foi o melhor jeito que encontrei de resolver os dois casos, fgets não foi tão bem)
scanf(" %[^\n]", palavra);

//Formatando printf
printf("\"Ro'b'er\tto\\/\"\n");
printf("(._.) ( l: ) ( .-. ) ( :l ) (._.)\n");
printf("(^_-) (-_-) (-_^)\n");
printf("(\"_\") ('.')\n");

Saída:
"Ro'b'er	to\/"
(._.) ( l: ) ( .-. ) ( :l ) (._.)
(^_-) (-_-) (-_^)
("_") ('.')

double v1=234.345, v2=45.698;
	
printf("%.6lf - %.6lf\n", v1, v2); >>> 234.345000 - 45.698000
printf("%.0lf - %.0lf\n", v1, v2); >>> 234 - 46
printf("%.1lf - %.1lf\n", v1, v2); >>> 234.3 - 45.7
printf("%.2lf - %.2lf\n", v1, v2); >>> 234.34 - 45.70
printf("%.3lf - %.3lf\n", v1, v2); >>> 234.345 - 45.698
printf("%.6e - %.6e\n", v1, v2); >>> 2.343450e+02 - 4.569800e+01
printf("%.6E - %.6E\n", v1, v2); >>> 2.343450E+02 - 4.569800E+01
printf("%g - %g\n", v1, v2); >>> 234.345 - 45.698
printf("%g - %g\n", v1, v2); >>> 234.345 - 45.698

printf("%03d\n%03d\n%03d\n%02d\n", n1, n2, n3, n4); //3 números e completando com 0 onde não tiver (se for 3, vira 003)

int OctalParaDecimal(int n)
{
	int x = 0, aux;
	
	for(int i=0; i<3; i++)
	{
		if (i==0)
		{
			aux = n/100;
			x += aux*pow(8,2);
		}
		else if(i==1)
		{
			aux = (n%100)/10;
			x += aux*pow(8,1);
		}
		else
		{
			aux = n%10;
			x += aux*pow(8,0);
		}
	}
	
	return x;
}