#include <stdio.h>
int main()
{
	int sum,a,i,n,m;
	printf("��������������\n");
	scanf("%d",&sum);
	a=(sum+1)/2;//�����ϰ벿�ְ����Խ�������
	for(i=1;i<=a;i++)//��������
	{
		for(n=1;n<=a-i;n++)//����ÿһ��*ǰ�ո�
			printf(" ");
		printf("*");//ÿ�е�һ��*
		if(i>1)//�ӵڶ��п�ʼ����һ��ֻ��һ��*
		{
			for(m=1;m<=2*i-3;m++)//����ÿ���м�ո�(�Ȳ����У�
				printf(" ");
			printf("*");//ÿ�����һ��*
		}
		printf("\n");
	}
	for(i=1;i<=a-1;i++)
	{
		for(n=1;n<=i;n++)
			printf(" ");
		printf("*");
		if(i<a-1)//���һ��ֻ��һ��*
		{
			for(m=1;m<=sum-2*i-2;m++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
	return 0;
}