#include<stdio.h>

int main()
{
	int arr[100];
	int soLuong = 0;
	double tongSoAm = 0;
	double tongSoDuong = 0;
	int soSoAm = 0;
	int i;
	
	do
	{
		scanf("%d", &soLuong);
	} while (soLuong <= 0);
	
	for (i = 0; i < soLuong; ++i)
	   scanf("%d", &arr[i]);
	   
	
	for (i = 0; i < soLuong; ++i)
	{
		if (arr[i] > 0)
		   tongSoDuong += arr[i];
		else if (arr[i] < 0)
		{
			tongSoAm += arr[i];
			++soSoAm;
		}
	}
	
	if (soSoAm == 0)
	   printf("%d ", 0);
	else
	   printf("%8.6f ", tongSoAm / soSoAm);
	   
	if (tongSoDuong == 0)
		printf(" %d", 0);
	else
		printf(" %8.6f", tongSoDuong);
	
	return 0;
}
