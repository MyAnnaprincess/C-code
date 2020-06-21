/*计数器：输入【0-10】数字，统计个数，输入-1时显示结果*/
#include <stdio.h>
int main()
{
	int x=0,i=0;
	int a[10] = { 0};
	while (x != -1)//输入-1时显示结果
	{
		scanf_s("%d", &x);
		a[x]++;
	}
	for (i = 0; i < 10; i++)
		printf("%d:%d\n", i,a[i]);
}
