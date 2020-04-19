#include<stdio.h>

void NhapMang(int arr[], int soLuong)
{
	for (int i = 0; i < soLuong; ++i)
	   scanf("%d", &arr[i]);
}

void XuatMang(int arr[], int soLuong)
{
	for (int i = 0; i < soLuong; ++i)
	   printf("%d ", arr[i]);
}


void SapXep(int arr[], int soLuong)
{
	for (int i = 0; i < soLuong - 1; ++i)
	{
		for (int j = i + 1; j < soLuong; ++j)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[10000];
	int soLuong = 0;
	scanf("%d", &soLuong);
	NhapMang(arr, soLuong);
	SapXep(arr, soLuong);
	XuatMang(arr, soLuong);
	
	
	return 0;
}
