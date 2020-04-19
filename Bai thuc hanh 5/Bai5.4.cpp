#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Xoa(char ten[], int viTri)
{
	if (viTri < 0)
	   return;
	for (int i = viTri; i < strlen(ten); ++i)
	{
		ten[i] = ten[i + 1];
	}
}

void chuanHoa(char ten[])
{
	// xoa khoang trang dau chuoi
	while (ten[0] == ' ' || ten[0] == '\t') Xoa(ten, 0);
	
	// xoa khoang trang cuoi chuoi
	int length = strlen(ten);
	while (ten[length - 1] == ' ' || ten[length - 1] == '\t')
	{
		Xoa(ten, length - 1);
		--length;
	}
	
	// chuyen chu thuong thanh chu hoa
	for (int i = 0; i < length; ++i)
	{
		if (isalpha(ten[i]))
		   ten[i] = toupper(ten[i]);
	}
	
	// xoa khoang trang giua cac tu
	for (int i = 0; i < length; ++i)
	{
		if (ten[i] == ' ' && (ten[i + 1] == ' ' || ten[i + 1] == '\t'))
		{
			Xoa(ten, i);
			--i;
			--length;
		}
		else if (ten[i] == '\t')
		{
			ten[i] = ' ';
			--i;
		}
	}
}



int main()
{
	char arrTen[100][51];
	int soLuong = 0;
	scanf("%d", &soLuong);
	char ch;
	scanf("%c", &ch);
	// nhap danh sach ten
	for (int i = 0; i < soLuong; ++i)
	{	
		gets(arrTen[i]);
	}
	
	// chuan hoa tung ten
	for (int i = 0; i < soLuong; ++i)
	{
		chuanHoa(arrTen[i]);
	}
	
	// in danh sach ten da chuan hoa
	for (int i = 0; i < soLuong; ++i)
	{
		 printf("%s:%d", arrTen[i], strlen(arrTen[i]));
		 if (i != soLuong - 1)
		    printf("\n");
		
	}
	  
	
	return 0;
}
