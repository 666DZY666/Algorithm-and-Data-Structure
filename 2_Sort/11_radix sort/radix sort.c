#include<stdio.h>

#define M 10

typedef struct
{
  int num;
  int next;
}slcell;         //��̬����Ľ������

int f[M];
int e[M];
int head=0;

void distribute(slcell *a,int w);
void collect(slcell *a);
void Output(slcell *a, int head);

void main()
{
	 int i,max,k=1;
	 slcell a[M];
	 printf("����������%d������n",M);
	 printf("�������1����:");
	 scanf("%d",&a[0].num);
	 a[0].next=1;
	 max=a[0].num;
	 for(i=1;i<M;i++)
	 {
	 printf("�������%d����:",i+1);
		scanf("%d",&a[i].num);
	 a[i].next=i+1;
	 if(max<a[i].num)
	  max=a[i].num;
	 }
	 a[M-1].next=-1;
	 for(i=1;i<max;i=i*10)
	 {
	  distribute(a,i);//����
	  collect(a);//����
	  printf("��%d����Ľ����\r\n",k);
	  Output(a,head);//���
	  printf("\r\n");
	  k++;
	 }
}

//�����̬�����е�ֵ
void distribute(slcell *a,int w)
{
  int i;
  int last;
  for(i=0;i<10;i++)
	f[i]=-1;
  for(i=head;i!=-1;i=a[i].next)
  {
    last=(a[i].num/w)%10;
    if(f[last]==-1)
		f[last]=i;
	else
		a[e[last]].next=i;
	e[last]=i;
  }  
}             
//��ĳһ�Σ�����
void collect(slcell *a)
{
  int i;
  int l = -1;
  for (i=0; i<10; i++)
  {
	if (f[i] != -1)
	{
		if (l == -1)
			head = f[i];
        else
            a[l].next = f[i];
        l = e[i];
     }
  }
  a[l].next = -1;
}                   
//������õ�����ָ��ɾ�̬����
void Output(slcell *a, int head)
{
    while (head != -1) 
	{
		printf("%4d", a[head].num);
        head = a[head].next;
    }
} 