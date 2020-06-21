/*对产生的10个随机整数进行选择排序，冒泡排序和插入排序*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bub(int a[]);
void sel(int a[]);
void ins(int a[]);
int main()
{
	int a[10];
	int i;
	srand((unsigned)time(0));
	for (i = 0; i < 10; i++)
	{
		a[i] = rand();
	}
	printf("原顺序:");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n冒泡排序法:");
	bub(a);
	printf("\n选择排序法:");
	sel(a);
	printf("\n插入排序法:");
	ins(a);
	return 0;
}

void bub(int a[])//两两比较大小，交换值的顺序
{
	int i, k;
	int t;
	for (i = 0; i < 9; i++)
	{
		for (k = 0; k < 9; k++)
		{
			if (a[k] > a[k + 1])
			{
				t = a[k];
				a[k] = a[k + 1];
				a[k + 1] = t;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
}

void sel(int a[])//选定一个值依次与其后值比较大小，交换值的顺序
{
	int i, k;
	int t;
	for (i = 0; i < 9; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			if (a[i] > a[k])
			{
				t = a[i];
				a[i] = a[k];
				a[k] = t;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
}

void ins(int a[])//选定数组中一个元素，将其值依次与后面元素的值比较，将这个元素插入后面元素之间。这个元素到它插入的位置之间的元素依次前移（改变元素下标）
{
	int i, k, n;
	int t;
	int m;
	for (i = 0; i < 10; i++)
	{
		t = a[i];
		for (m = 0, k = i + 1; k < 10; k++)
		{
			if (a[i] > a[k])
			{
				for (n = i; n < k; n++)
					a[n] = a[n + 1];
				a[k] = t;
				m++;
				break;
			}
		}
		if (m != 0)
			i--;
	}
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
}