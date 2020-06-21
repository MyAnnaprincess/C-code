#include <stdio.h>
int main()
{
	int sum,a,i,n,m;
	printf("请输入总行数：\n");
	scanf("%d",&sum);
	a=(sum+1)/2;//菱形上半部分包括对角线行数
	for(i=1;i<=a;i++)//控制行数
	{
		for(n=1;n<=a-i;n++)//控制每一行*前空格
			printf(" ");
		printf("*");//每行第一个*
		if(i>1)//从第二行开始，第一行只有一个*
		{
			for(m=1;m<=2*i-3;m++)//菱形每行中间空格(等差数列）
				printf(" ");
			printf("*");//每行最后一个*
		}
		printf("\n");
	}
	for(i=1;i<=a-1;i++)
	{
		for(n=1;n<=i;n++)
			printf(" ");
		printf("*");
		if(i<a-1)//最后一行只有一个*
		{
			for(m=1;m<=sum-2*i-2;m++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
	return 0;
}