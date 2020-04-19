#include<stdio.h>

int main()
{
	double x, y;
	scanf("%lf", &x);
	scanf("%lf", &y);
	double A = x * x + y * y;
	double B = (x + y) * (x + y);
	double C = (x - y) * (x - y);
	printf("%8.6f\n%8.6f\n%8.6f", A, B, C);
	
	return 0;
}
