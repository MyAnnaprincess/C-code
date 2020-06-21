#include <stdio.h>
int main()
{
	int i,n,a,b,m;
	printf("请输入共有多少行\n");
	scanf_s("%d", &n);//输出菱形永远为奇数行
	m = (n + 1) / 2;//菱形上半部分包括对角线行数（*逐渐递增）
	for (i = 1; i <= m; i++)//控制行数
	{
		for (a = 1; a <= m - i; a++)//控制空格数
			printf(" ");
		for (b = 1; b<= 2 * i - 1; b++)//控制*数
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= n - m; i++)//菱形下半部分有n-m行
	{
		for (a = 1; a <= i; a++)//每一行空格数依次递增（1，2，3…）循环次数与i有关
			printf(" ");
		for (b = 1; b <= n-2*i; b++)//每一行*依次递减（n-2，n-4,n-6…）循环次数与n-2*i有关<=必须有一个随行数改变的变量参与即i
			printf("*");
		printf("\n");
	}
	return 0;
}
