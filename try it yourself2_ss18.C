
#include <stdio.h>
#include <stdlib.h>

/* Viet chuong trinh C nhap vao nhiet do 5 thanh pho trong 5 nam tinh trung binh cua 5 thanh pho. */
/* Hien thi nhiet do lon va nho nhat moi thanh pho */
/* su dung ham de xac dinh nhiet do lon va nho nhat */

int arg(int args[5])
{
	int abc = 0;
	int i;
	for(i = 0; i < 5; i++)
	abc += args[i];
	return abc/5;
}
int main()
{
	int temp[5][5];
	int args[5];
	int max[5];
	int min[5];
	int i, k;
	printf("\nNhap vao so nhiet do C");
	for(i = 0; i < 5; i++)
	{
		for(k = 0; k < 5; k++)
		{
		args[i] = 0;
		printf("Thanh pho thu %d,nam thu %d\n: ", i + 1, k + 1);
		scanf("%d", &temp[i][k]);
		}
		max[i] = min[i] = temp[i][0];
	}
	for(i = 0; i < 5; i++)
	{
		args[i] = arg(temp[i]);
		for(k = 0; k < 5; k++)
		{
			if(temp[i][k] > min)
			min[i] = temp[i][k];
			if(temp[i][k] < max)
			max[i] = temp[i][k];
		}
		printf("\nTrung Binh Cua Thanh Pho %d: %d\n", i + 1, args[i]);
	}
	for(i = 0; i < 5; i++)
	{
		printf("\nThanh Pho %d co Nhiet Do lon nhat la: %d\n", i + 1, max[i]);
		printf("\nThanh Pho %d co Nhiet Do nho nhat la: %d\n", i + 1, min[i]);
	}
	return 0;
}

