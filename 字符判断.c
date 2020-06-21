#include<stdio.h>
int main()
{
	char a;
	scanf_s("%c", &a);
	
	if ('a' <= a &&a<= 'z')
		printf("L");
	else if ('A' <= a &&a<= 'Z')
		printf("U");
	else if ('0' <= a&&a <= '9')
		printf("N");
	else if (a == ' ')
		printf("S");
	else
		printf("O");
	
	return 0;
}