/*约瑟夫环*/
/*实现约瑟夫环，约瑟夫环（Joseph）问题的一种描述是：编号为1、2、3……n的n个人按照顺时针方向围坐一圈，每人持有一个密码（正整数）。
一开始任选一个正整数作为报数的上限值m，从第一个人开始按照顺时针的方向自1开始顺序报数，报到m时停止报数。
报m的人出列，将他的密码作为新的m值，从他的顺时针方向上的下一个人开始重新从1报数，如此下去，直至所有人全部出列为止。设计一个程序求出出列顺序。*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int number;
	struct node* next;
}*node;//指向结构体类型的指针
node creat_circle(int n, int m);
node del_node(node L);
int main()
{
	int n, m;
	int i;
	node start_location, L;//需要指向结构体的指针
	start_location = NULL;
	L = NULL;
	printf("请输入人数n=");
	scanf_s("%d", &n);
	printf("请输入正整数m=");
	scanf_s("%d", &m);
	start_location = creat_circle(n, m);
	L = start_location;
	printf("出列顺序:");
	if (L)
	{
		for (; n != 1; n--)//循环到最后只剩下一个人
		{
			L = start_location;
			for (i = 2; i <= m; i++)
			{
				L = L->next;
			}
			printf("%d ", L->number);//打印编号
			m = L->number;//新的m值
			start_location = del_node(L);//再一次循环开始位置	
		}
	}
	return 0;
}

node creat_circle(int n, int m)//返回指向结构体的指针
{
	node head, a, b;//指向结构体类型的指针的变量名
	int i;
	head = (node)malloc(sizeof(struct node));
	if (head)
	{
		head->number = 1;
		b = head;//两个指针指向同一空间，可以用其中一个指针改变空间内容
		for (i = 2; i <= n; i++)//依次构建连接节点
		{
			a = (node)malloc(sizeof(struct node));//指针a指向开辟的一块新空间，每一次循环开辟一块新空间
			if (a)
			{
				a->number = i;//位置编号
				b->next = a;
				b = a;
			}
		}
		b->next = head;//尾节点指向头节点，构成链表环
	}
	return head;
}

node del_node(node L)
{
	node start_location;
	node end;
	end = L;
	while (end->next != L)
		end = end->next;//找出链表环中最后一个节点(与每次确定第一个节点对应)
	node del = L;
	start_location = L->next;//开始位置移向m位置下一位
	free(del);//删除m位置节点
	end->next = start_location;//m前一位置节点指向m后一位置节点(即链表环剔除m位置节点后的链表环)
	return start_location;
}