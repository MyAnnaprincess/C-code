/*将字符串b中的任一字符在字符串a中第一次出现的位置作为结果返回，如果a中不包含b中的字符，则返回-1.*/
#include <stdio.h>
#include <stdlib.h>
void any(char a[], char b[]);
int main()
{
	int i;
	//方法一：
	/*
	int x, y;
	scanf_s("%d,%d", &x, &y);
	char* a = (char*)malloc(x*sizeof(char));
	char* b = (char*)malloc(y*sizeof(char));
	if (a)
	{
		scanf_s("%s", a,x);//指针作数组,只能输入x-1个字符,字符串数组最后一位为'\0'
	}
	if (b)
	{
		scanf_s("%s", b,y);
	}
	*/
	//方法二：
	char a[100];
	gets(a);//getchar函数结束时的值(即最后一个变量的值)会被赋为EOF
	char b[100] ;
	gets(b);
	any(a, b);
	return 0;
}

void any(char a[], char b[])
{
	int i,j;
	int m=0;
	int c[100] ;
	c[0] = -1;
	for (j = 0; b[j] != '\0'; j++)
	{
		for (i = 0; a[i] != '\0' && b[j] != a[i]; i++)
			;
		if (b[j] == a[i])
		{
			c[m++] = i+1;
		}
	}
	if (c[0] == -1)
		printf("%d", c[0]);
	else
	{
		for (i = 0; i < m; i++)
			printf("%d", c[i]);
	}
}