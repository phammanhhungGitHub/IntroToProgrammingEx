#include<stdio.h>

int main()
{
	short n = 1;
	short i;
	do
	{
		scanf("%d", &n);
	} while (n <= 0 || n >= 8);
	
	int giaiThua = 1;
	for (i = 2; i <= n; ++i)
	{
		giaiThua *= i;
	}
	
	printf("%d", giaiThua);
	
	return 0;
}
