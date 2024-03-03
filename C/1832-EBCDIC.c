#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int OctalParaDecimal(int);
char Converte(int);

int main()
{
	char octal[999], aux[4];
	int sz, cont, num, numFinal;
	
	while(gets(octal))
	{
		cont = 0;
		sz = strlen(octal);
		aux[3] = '\0';
		
		for(int i=0; i<sz; i++)
		{
			aux[cont] = octal[i];
			cont++;
			
			if (cont==3)
			{
				num = atoi(aux);
				numFinal = OctalParaDecimal(num);
				cont = 0;
				i++;
				printf("%c", Converte(numFinal));
			}
		}
		
		printf("\n");
	}
 
    return 0;
}

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

char Converte(int n)
{
	switch(n)
	{
		case 100: return ' ';
		case 129: return 'a';
		case 130: return 'b';
		case 131: return 'c';
		case 132: return 'd';
		case 133: return 'e';
		case 134: return 'f';
		case 135: return 'g';
		case 136: return 'h';
		case 137: return 'i';
		case 145: return 'j';
		case 146: return 'k';
		case 147: return 'l';
		case 148: return 'm';
		case 149: return 'n';
		case 150: return 'o';
		case 151: return 'p';
		case 152: return 'q';
		case 153: return 'r';
		case 162: return 's';
		case 163: return 't';
		case 164: return 'u';
		case 165: return 'v';
		case 166: return 'w';
		case 167: return 'x';
		case 168: return 'y';
		case 169: return 'z';
		case 193: return 'A';
		case 194: return 'B';
		case 195: return 'C';
		case 196: return 'D';
		case 197: return 'E';
		case 198: return 'F';
		case 199: return 'G';
		case 200: return 'H';
		case 201: return 'I';
		case 209: return 'J';
		case 210: return 'K';
		case 211: return 'L';
		case 212: return 'M';
		case 213: return 'N';
		case 214: return 'O';
		case 215: return 'P';
		case 216: return 'Q';
		case 217: return 'R';
		case 226: return 'S';
		case 227: return 'T';
		case 228: return 'U';
		case 229: return 'V';
		case 230: return 'W';
		case 231: return 'X';
		case 232: return 'Y';
		case 233: return 'Z';
		case 240: return '0';
		case 241: return '1';
		case 242: return '2';
		case 243: return '3';
		case 244: return '4';
		case 245: return '5';
		case 246: return '6';
		case 247: return '7';
		case 248: return '8';
		case 249: return '9';
		default: return ' ';
	}
}