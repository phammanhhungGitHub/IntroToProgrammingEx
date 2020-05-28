#include<stdio.h>
#include<math.h>

void GiaiPhuongTrinhBac2(double a, double b, double c)
{
	if (a == 0)
	{
		if (b == 0 && c != 0)
		{
			printf("Phuong trinh vo nghiem");	
		}
		else if (b == 0 && c == 0)
		{
			printf("Phuong trinh vo so nghiem");	
		}
		else
		{
			printf("%.6f", - c / b);	
		}
	}
	else
	{
		if (a < 0)
		{
			a *= -1;
			b *= -1;
			c *= -1;
		}
		double denta = b * b - 4 * a * c;
		if (denta == 0)
		{
			printf("%.f", -b / (2 * a));
		}
		else if (denta > 0)
		{
			double x1 = (-b + sqrt(denta)) / (2 * a);
			double x2 = (-b - sqrt(denta)) / (2 * a);
			printf("%.6f\n%.6f", x1, x2);
		}
		else
		{
			double phanThuc = -b / (2 * a);
			double phanAo = sqrt(-denta) / (2 * a);
			printf("%.6f+%.6fi", phanThuc, phanAo);
			printf("\n%.6f-%.6fi", phanThuc, phanAo);
		}
		
		
	}
}

int main()
{
	double a = 0.0, b = 0.0, c = 0.0;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	GiaiPhuongTrinhBac2(a, b, c);
	printf("Hello World");
	
	return 0;
}
