/*scanf输入数组数量*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int number;
	int i;
	scanf_s("%d", &number);
	int* a = 0;
	a = (int*) malloc(number * sizeof(int));
	for (i = 0; i < number; i++)
		scanf_s("%d", &a[i]);
	for(i=0;i<number;i++)
		printf("%d", a[i]);
	free(a);
	return 0;
}