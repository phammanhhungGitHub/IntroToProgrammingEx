#include<stdio.h>

int GiaiThua(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * GiaiThua(n - 1);
	}
}

int main()
{
	int n;
	/* giaiThua = 1, i;*/
	
	do
	{
		scanf("%d", &n);
	} while (n <= 0 || n >= 8);
	
	/*for (i = 1; i <= n; ++i)
	{
		giaiThua = giaiThua * i;
	}*/
	
	printf("%d", GiaiThua(n));
	
	return 0;
}
