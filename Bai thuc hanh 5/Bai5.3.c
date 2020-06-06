#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Xoa(char *ten, int viTri)
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
	char ten[151];
	gets(ten);
	ChuanHoa(ten);
	printf("%s:%d", ten, strlen(ten));
	return 0;
}
