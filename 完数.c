/*求2~1000之间的所有完数，完数是恰好等于它的真因子（自身除外）之和。如：6(1 +2 +3 )，28（1+2+4+7+14）*/
#include <stdio.h>
int main()
{
	int x,b,i;
	for(x=2;x<=1000;x++)
	{
		for(i=1,b=0;i<=x/2;i++)
		{
			if(x%i==0)
				b+=i;
		}
		if(b==x)
			printf("%d ",x);
	}
return 0;
}



