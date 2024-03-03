#include <stdio.h>
 
int main()
{
	int n1, n2, n3, n4;
	scanf("%d.%d.%d-%d", &n1, &n2, &n3, &n4);

	printf("%03d\n%03d\n%03d\n%02d\n", n1, n2, n3, n4);

    return 0;
}