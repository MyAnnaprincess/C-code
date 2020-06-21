#include <stdio.h>
int main()
{
	int i, n, m,x;
	x = 3;//先输出上半部分含菱形对角线（三角形）
	for (i = 1; i <= x; i++)//控制行数
	{
		for (n = 1; n <= x - i; n++)//控制空格数
			printf(" ");
		for (m = 1; m <= 2 * i - 1; m++)//控制*数
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= x - 1; i++)
	{
		for (n = 1; n <= i; n++)
			printf(" ");
		for (m = 1; m <= 5 - 2 * i; m++)
			printf("*");
		printf("\n");
	}
}
