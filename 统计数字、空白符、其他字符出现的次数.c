/*统计数字、空白符（包括空格符、制表符及换行符）、其他字符出现的次数*/
#include <stdio.h>
int main()
{
	int c, i, empty, other;
	int number[10];
	empty = other = 0;
	for (i = 0; i < 10; ++i)
		number[i] = 0;//C89数组声明时下表不能为变量,使用时可以
	while ((c = getchar()) != EOF)//终端输入字符流存入缓存区，getchar()每运行一次从缓存区读取一个字符.读取文件时，文件末尾为EOF;读取终端字符流(可以换行),不知道哪里结束(EOF),需在最后输入Ctrl+z
	{
		if (c >= '0' && c <= '9')
			++number[c - '0'];//(字符以ASCII码二进制存储)把字符'0'-'9'转换为十进制0-9作为数组下标
		else if (c == ' ' || c == '\n' || c == '\t')
			++empty;
		else
			++other;
	}
	printf("digits=");
	for (i = 0; i < 10; ++i)
		printf("%d", number[i]);
	printf(",empty=%d,other=%d\n", empty, other);
	return 0;
}