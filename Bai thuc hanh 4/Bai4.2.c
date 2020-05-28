#include<stdio.h>

int main()
{
	int n, i, isPrimeNumber = 1;
	
	scanf("%d", &n);
	
	if (n < 2)
	{
		isPrimeNumber = 0;
	}
	else
	{
		for (i = 2; i  < n; ++i)
		{
			if (n % i == 0)
			{
				isPrimeNumber = 0;
				break;
			}
		}
	}
	
	if (isPrimeNumber)
	{
		printf("La so nguyen to");
	}
	else
	{
		printf("Khong phai so nguyen to");
	}
	
	return 0;
}
