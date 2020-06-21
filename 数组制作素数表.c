/*素数表*/
#include <stdio.h>
int main()
{
	int i,x;
	int a[100];
	int number = 100;
	for (x = 0; x < number; x++)
	{
		a[x] = 1;
	}
	for (x = 2; x < number; x++)//素数从2开始
	{
		if (a[x])
		{
			for (i = 2; x * i< number; i++)//素数：大于1的自然数中，除了1和它本身外不再有其它因数。 即数x（大于1的自然数）的整数倍一定为非素数
			{
				a[x*i] = 0;
			}
		}
	}
	for (x = 2; x < number; x++)
	{
		if (a[x])
		{
			printf("%d\t", x);
		}
	}
	return 0;
}