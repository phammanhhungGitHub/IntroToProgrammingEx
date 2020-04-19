#include<stdio.h>

int main()
{
	double diemToan, diemLy, diemHoa;
	scanf("%lf", &diemToan);
	scanf("%lf", &diemLy);
	scanf("%lf", &diemHoa);
	
	printf("%8.6f\n", diemToan + diemLy + diemHoa);
	printf("%8.6f", (diemToan + diemLy + diemHoa) / 3);
	
	return 0;
	
}
