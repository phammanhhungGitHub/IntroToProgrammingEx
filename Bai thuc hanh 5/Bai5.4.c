#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Xoa(char ten[], int viTri)
{
	if (viTri < 0)
	   return;
	
	int i;
	for (i = viTri; i < strlen(ten); ++i)
	{
		ten[i] = ten[i + 1];
	}
}

void ChuanHoa(char ten[])
{
	int i; 
	
	// xoa khoang trang dau chuoi
	while (isblank(ten[0])) Xoa(ten, 0);
	
	// xoa khoang trang cuoi chuoi
	int length = strlen(ten);
	while (isblank(ten[length - 1]))
	{
		Xoa(ten, length - 1);
		--length;
	}
	
	// chuyen chu thuong thanh chu hoa
	for (i = 0; i < length; ++i)
	{
		if (isalpha(ten[i]))
		   ten[i] = toupper(ten[i]);
	}
	
	// xoa khoang trang giua cac tu
	for (i = 0; i < length; ++i)
	{
		if (isblank(ten[i]))
		{
			if (isblank(ten[i + 1]))
			{
				Xoa(ten, i);
				--i;
				--length;
			}
			else if (ten[i] != ' ')
			{
				ten[i] = ' ';
			}
		}
	}
}



int main()
{
	char arrTen[100][51];
	int i, soLuong = 0;
	
	scanf("%d", &soLuong);
	
	// nhap danh sach ten
	for (i = 0; i < soLuong; ++i)
	{
		scanf("%*[\n]");
		gets(arrTen[i]);
	}
	
	// chuan hoa tung ten
	for (i = 0; i < soLuong; ++i)
	{
		ChuanHoa(arrTen[i]);
	}
	
	// in danh sach ten da chuan hoa
	for (i = 0; i < soLuong; ++i)
	{
		 printf("%s:%d", arrTen[i], strlen(arrTen[i]));
		 if (i != soLuong - 1)
		    printf("\n");	
	}
	
	return 0;
}
