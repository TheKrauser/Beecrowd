#include <stdio.h>
 
int main()
{
	int inteiro, decimais;
	
	scanf("%d.%d", &inteiro, &decimais);
	printf("%d.%d\n", decimais, inteiro);
	
	return 0;
}