#include <stdio.h>
 
int main()
{
	double v1=234.345, v2=45.698;
	
	printf("%.6lf - %.6lf\n", v1, v2);
	printf("%.0lf - %.0lf\n", v1, v2);
	printf("%.1lf - %.1lf\n", v1, v2);
	printf("%.2lf - %.2lf\n", v1, v2);
	printf("%.3lf - %.3lf\n", v1, v2);
	printf("%.6e - %.6e\n", v1, v2);
	printf("%.6E - %.6E\n", v1, v2);
	printf("%g - %g\n", v1, v2);
	printf("%g - %g\n", v1, v2);
	
    return 0;
}