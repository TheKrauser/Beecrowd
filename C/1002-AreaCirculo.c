#include <stdio.h>
 
int main()
{
	double raio, area = 0;
    double n = 3.14159;
    scanf("%lf", &raio);
    area = raio * raio * n;
    printf("A=%.4lf\n", area);
    return 0;
}
