/*���, ������ڲ���ӽ�������a��n������,ÿ�д�ӡ8��,a �� n �Ӽ������롣*/
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


