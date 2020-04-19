#include<stdio.h>
#include<math.h>
int main()
{
	double x = 0.0, y = 0.0, z = 0.0;
	scanf("%lf", &x);
	scanf("%lf", &y);
	scanf("%lf", &z);
	double result = ((x + y + z) / (x * x + y * y + 1)) - fabs(x - z * cos(y));
	printf("%8.6f", result);
	
	return 0;
}
