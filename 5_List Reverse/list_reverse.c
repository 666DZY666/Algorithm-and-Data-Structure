#include <stdio.h>
#include<stdlib.h>

typedef struct node* list;

struct node{
	int data;
	list next;
};

list creat_list(int n);
list reverse1_list(list H);
list reverse2_list(list H);
void print_list(list H);

//������
int main()
{
	while(1)
	{
		list a,b,c,d;

		a = creat_list(10);
		printf("original:\r\n");
		print_list(a);
		printf("\r\n");
		b = reverse1_list(a);
		printf("reversed:\r\n");
		print_list(b);
		printf("\r\n\r\n");
		c = creat_list(10);
		printf("original:\r\n");
		print_list(c);
		printf("\r\n");
		d = reverse2_list(c);
		printf("reversed:\r\n");
		print_list(d);
	}
}
//�����б���˫ָ��
list creat_list(int n)
{
	list H,q,p;
	int i;
	for(i=0;i<n;i++)
	{
		p = (list)malloc(sizeof(struct node));
		if(i==0)
		{
			H = p;
			q = p;
		}
		scanf("%d",&p->data);
		p->next = NULL;
		q->next = p;
		q = p;
	}
	return H;
}
//��ӡ����
void  print_list(list H)
{
	int i = 1;
	if(H == NULL)
		printf("����գ�");
	else
	{
		while(H != NULL)
		{
			if(i == 1)
			{
				printf("%d",H->data);
				H = H->next;
				i++;
			}
			printf("->%d",H->data);
			H = H->next;
		}
	}
}
//��ת����1��������-���׵�β��˫ָ��
list reverse1_list(list H)
{
	list newH = NULL,temp;
	if(H == NULL || H->next == NULL)
		return H;
	while(H != NULL)
	{
		temp = H->next;
		H->next = newH;
		newH = H;
		H = temp;
	}
	return newH;
}
//��ת����2�����ݹ�-��β����
list reverse2_list(list H)
{
	list newH;
	if(H == NULL || H->next == NULL)
		return H;
	newH =reverse2_list(H->next);
	H->next->next = H;
	H->next = NULL;
	return newH;
}