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
	
	// chuan hoa ten
	for (i = 0; i < length; ++i)
	{
		if (i == 0 || (isalpha(ten[i]) && ten[i - 1] == ' '))
		   ten[i] = toupper(ten[i]);
		else
		   ten[i] = tolower(ten[i]);
	}
}


void SapXep(char arrTen[][51], int soLuong)
{
	int i, j;
	for (i = 0; i < soLuong - 1; ++i)
	{
		for (j = i + 1; j < soLuong; ++j)
		{
			if (strcmp(arrTen[i], arrTen[j]) > 0)
			{
				char temp[51];
				strcpy(temp, arrTen[i]);
				strcpy(arrTen[i], arrTen[j]);
				strcpy(arrTen[j], temp);
			}
		}
	}
}

int main()
{
	char arrTen[100][51];
	int soLuong = 0;
	int i;
	
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
	
	// sap xep
	SapXep(arrTen, soLuong);
	
	// in danh sach ten da chuan hoa va sap xep
	for (i = 0; i < soLuong; ++i)
	{
		printf("(%d)%s", i + 1, arrTen[i]);
		if (i != soLuong - 1)
		   printf("\n");
	}
	return 0;
}
