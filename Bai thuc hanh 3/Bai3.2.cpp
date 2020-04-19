#include<stdio.h>

int main()
{
	const double PI = 3.14159;
	double radius = 0.0;
	scanf("%lf", &radius);
	
	double perimeter = 2 * radius * PI;
	double area = radius * radius * PI;
	printf("%8.6f\n%8.6f", perimeter, area);
	return 0;
}
