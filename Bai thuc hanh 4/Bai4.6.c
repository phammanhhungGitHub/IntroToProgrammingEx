#include<stdio.h>
#include<math.h>

double S1(int n, double x)
{
	int i;
	double s1 = 0.0;
	double soHang = 1.0;
	for (i = 0; i <= n; ++i)
	{
		s1 += soHang;
		soHang *= x;	
	}
	return s1;
}

double S2(int n, double x)
{
	int i;
	double s2 = 0.0;
	double soHang = 1.0;
	int sign = 1;
	for (i = 0; i <= n; ++i)
	{
		s2 += soHang * sign;
		sign *= -1;
		soHang *= x;
	}
	return s2;
}

double S3(int n, double x)
{
	int i;
	double s3 = 1.0;
	double soHang = 1.0;
	for (i = 1; i <= n; ++i)
	{
		soHang *= x / i;
		s3 += soHang;
	}
	return s3;
}

int main()
{
	int n = 0;
	double x = 0.0;
	do
	{
		scanf("%d", &n);
		scanf("%lf", &x);
	} while (n <= 0);
	
	printf("%8.6f\n%8.6f\n%8.6f", S1(n, x), S2(n, x), S3(n, x));
	
	return 0;
}
