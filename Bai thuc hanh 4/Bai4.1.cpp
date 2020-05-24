#include<stdio.h>

int main()
{
	short n = 1;
	do
	{
		scanf("%d", &n);
	} while (n <= 0 || n >= 8);
	
	int giaiThua = 1;
	for (int i = 2; i <= n; ++i)
	{
		giaiThua *= i;
	}
	
	printf("%d", giaiThua);
	
	return 0;
}
