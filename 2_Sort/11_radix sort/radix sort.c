#include<stdio.h>

#define M 10

typedef struct
{
  int num;
  int next;
}slcell;         //静态链表的结点类型

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
	 printf("请依次输入%d个整数n",M);
	 printf("请输入第1个数:");
	 scanf("%d",&a[0].num);
	 a[0].next=1;
	 max=a[0].num;
	 for(i=1;i<M;i++)
	 {
	 printf("请输入第%d个数:",i+1);
		scanf("%d",&a[i].num);
	 a[i].next=i+1;
	 if(max<a[i].num)
	  max=a[i].num;
	 }
	 a[M-1].next=-1;
	 for(i=1;i<max;i=i*10)
	 {
	  distribute(a,i);//分配
	  collect(a);//排序
	  printf("第%d排序的结果是\r\n",k);
	  Output(a,head);//输出
	  printf("\r\n");
	  k++;
	 }
}

//输出静态链表中的值
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
//（某一次）排序
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
//将排序好的数组恢复成静态链表
void Output(slcell *a, int head)
{
    while (head != -1) 
	{
		printf("%4d", a[head].num);
        head = a[head].next;
    }
} 