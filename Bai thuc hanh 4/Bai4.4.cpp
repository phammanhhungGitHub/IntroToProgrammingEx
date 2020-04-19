#include<stdio.h>

int UCLN(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		   a -= b;
		else
		   b -= a;
	}
	return a;
}


int main()
{
	int a = 0, b = 0;
	do
	{
		scanf("%d", &a);
		scanf("%d", &b);
	} while (a <= 0 || b <= 0);
	
	int ucln = UCLN(a, b);
	int bcnn = a * b / ucln;
	printf("%d\n%d", ucln, bcnn);
	
	return 0;
}
