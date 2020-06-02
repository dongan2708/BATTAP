#include <stdio.h>

int main()
{
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum, loop;
	float avg;
	sum = avg = 0;
	printf("\nTinh trung binh : \n\n");
	for(loop = 0; loop < 10; loop++)
	{
		sum = sum + array[loop];
	}
	avg = (float)sum/loop;
	printf("\nGia tri trung binh cua mang: %0.1f", avg);
	return 0;
}
