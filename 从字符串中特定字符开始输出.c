/*输入一个字符串和一个字符，如果该字符在字符串中,就从该字符首次出现的位置开始输出字符串中的字符*/
#include <stdio.h>
char* match(char str[], char a);
int main()
{
	char str[20];
	int i = 0;
	char* q;
	while ((str[i] = getchar()) != '\n')
	{
		i++;
	}
	str[i] = '\0';
	q = match(str, 'a');
	printf("%s", q);
}

char* match(char str[], char ch)
{
	int i = 0;
	char* p;
	while (1)
	{
		if (str[i] == ch)
		{
			p = &str[i];
			return p;
		}
		i++;
	}
}