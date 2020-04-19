#include<stdio.h>
#include<math.h>

int main()
{
	double x = 0.0, y = 0.0;
	scanf("%lf", &x);
	scanf("%lf", &y);
	double result = pow(x, 6) + pow(x, 5) * y + pow(x, 4) * y * y
	                + pow(x, 3) * pow(y, 3) + x * x * pow(y, 4) 
	                + x * pow(y, 5) + pow(y, 6);
	printf("%8.6f", result);
	return 0;
}
