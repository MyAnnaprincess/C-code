#include<stdio.h>
int main()
{
	float operate1 = 0,  operate2 = 0;
	char op;
	scanf_s("%f %c %f", &operate1, &op, &operate2);
	switch (op)
	{
		case '+':printf("%.2f+%.2f=%.2f", operate1, operate2, operate1 + operate2); break;
		case '-':printf("%.2f-%.2f=%.2f", operate1, operate2, operate1 - operate2); break;
		case '*':printf("%.2f*%.2f=%.2f", operate1, operate2, operate1 * operate2); break;
		case '/':
		{
			if (operate2 == 0)
				printf("division by zero");
			else
			printf("%.2f/%.2f=%.2f", operate1, operate2, operate1 / operate2); break;
		}
		default:printf("error");
	}
	return 0;
}