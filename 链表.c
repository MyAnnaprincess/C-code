#include <stdio.h>
#include <stdlib.h>
typedef struct link_list
{
	int value;
	struct link_list* next;
}link;
void link_point(int number, link* point, link* head);
void print(link* Head);
void delete(int number, link* head, link* point);
void FREE(link* head, link* point);
int main()
{
	link* head;
	head = (link*)malloc(sizeof(link));
	if (head)
	{
		{
			head->value = NULL;
			head->next = NULL;
		}
		link* point = head;
		int number;
		do
		{
			scanf_s("%d", &number);
			if (number != -1)
				link_point(number, point, head);
		} while (number != -1);
		print(head);
		delete(number, head, point);
		print(head);
		FREE(head, point);
		
	}
	return 0;
}

/*增加节点接在链表尾部*/
void link_point(int number,link* point,link* head)
{
	link* single = (link*)malloc(sizeof(link));
	if (single)
	{
		{
			single->value = number;
			single->next = NULL;
		}
		if (point)
		{
			while (point->next)
				point = point->next;
			point->next = single;
		}
		else
			head->next = single;
	}
}

/*打印链表中每个节点数据*/
void print(link* Head)
{
	link* p = Head;
	p = p->next;
	for (; p; p = p->next)
	{
		printf("%d\n", p->value );
	}
}

/*删除链表中节点*/
void delete(int number,link* head,link* point)
{
	scanf_s("%d", &number);
	link* del;
	point = point->next;
	for (del = head; point; del = point, point = point->next)
	{
		if (point->value == number)
		{
			if(del)
				del->next = point->next;
			break;
		}
	}
	free(point);//释放指针所指地址的内存
}

/*释放内存（不能在link_point函数中free,,否则每个节点都被free了）*/
void FREE(link* head, link* point)
{
	point = point->next;
	free(head);
	for (head = point; point;)
	{
		point = point->next;
		free(head);
		head = point;
	}
}