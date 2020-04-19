#include<stdio.h>

int LaSoNguyenTo(int n)
{
	for (int i = 2; i <= n/2; ++i)
	{
		if (n % i == 0)
		   return 0;
	}
	if (n >= 2)
	   return 1;
	else
	   return 0;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int laSoNguyenTo = LaSoNguyenTo(n);
	if (laSoNguyenTo == 1)
	   printf("La so nguyen to");
	else
	   printf("Khong phai so nguyen to");
	return 0;
}
