/*折半查找函数*/
/*在已排序数组b中查找某个特定的值a，数组b以升序排列.如果b中包含a，则该函数返回a在b中的位置(介于0~n-1)；否则返回-1*/
#include <stdio.h>
#include <stdlib.h>//***
int binsearch(int a, int* b, int number);
int main()
{
	int a;
	scanf_s("%d",&a);
	int number;
	scanf_s("%d",&number);
	int* b = (int*)malloc(number * sizeof(int));
	int i;
	if (b)//***
	{
		for (i = 0; i < number; i++)
		{
			scanf_s("%d", &b[i]);
		}
	}
	a=binsearch(a, b,number);
	free(b);//***
	printf("%d", a);
	return 0;
}

int binsearch(int a, int* b, int number)
{
	int high = number - 1, low = 0;
	while (a<=b[high])
	{
		int mid = (high + low)/2;
		if (a < b[mid])
			high = mid - 1;
		else if (a > b[mid])
			low = mid + 1;
		else if (a == b[mid])//***
			return mid;
	}
	return -1;
}