#include<stdio.h>
#include<math.h>

void GiaiPhuongTrinhBacNhat(double a, double b)
{
	if (a == 0)
	{
		if (b == 0)
		   printf("Phuong trinh vo so nghiem");
		else
		   printf("Phuong trinh vo nghiem");
	}
	else
	{
		printf("%8.6f", -b / a);
	}
}

void GiaiPhuongTrinhBac2(double a, double b, double c)
{
	if (a == 0)
	   GiaiPhuongTrinhBacNhat(b, c);
	else
	{
		double denta = b * b - 4 * a * c;
		if (denta == 0)
		   printf("%8.6f", -b / (2 * a));
		else if (denta > 0)
		{
			double x1 = (-b + sqrt(denta)) / (2 * a);
			double x2 = (-b - sqrt(denta)) / (2 * a);
			if (x1 > x2)
			   printf("%8.6f\n%8.6f", x1, x2);
			else
			   printf("%8.6f\n%8.6f", x2, x1);
		}
		else
		{
			double phanThuc = -b / (2 * a);
			double phanAo = sqrt(-denta) / (2 * a);
			if (phanAo > 0)
			   printf("%8.6f+%8.6fi\n%8.6f-%8.6fi", phanThuc, phanAo, phanThuc, phanAo);
			else
			   printf("%8.6f+%8.6fi\n%8.6f-%8.6fi", phanThuc, -phanAo, phanThuc, -phanAo);
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
	
	return 0;
}
