/*编程, 输出大于并最接近正整数a的n个素数,每行打印8个,a 和 n 从键盘输入。*/
#include <stdio.h>
int main()
{
	int a,n,i,m,b=0,x=0;
	scanf("%d %d",&a,&n);
	for(i=a+1;;i++)
	{
		for(m=2,b=0;m<=i/2;m++)
		{
			if(i%m==0)
			{
				b=m;
				break;
			}
		}
		if(b==0)
		{
			printf("%d ",i);
			x++;
			if(x%8==0)
				printf("\n");
		}
		
		if(x>=n)
			break;
	}
	return 0;
}


