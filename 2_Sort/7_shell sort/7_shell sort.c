//希尔排序

#include <stdio.h>

void ShellSort(int *p,int l);

void main()
{
	int a[100];
	int n,i;
	printf("Please input sequence length\r\n");
	scanf("%d",&n);
	printf("\r\n\r\n");
	printf("Please input a sequence\r\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\r\n\r\n");
	printf("The original sequence is\r\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\r\n\r\n");

	ShellSort(a,n);

	printf("The result is\r\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\r\n\r\n");
	ShellSort(a,n);
}

void ShellSort(int *p,int l)
{
	int step;
	int i,j,temp;
	for(step=l/2;step>0;step/=2)					 //步长控制
	{
		for(i=step;i<l;i++)							 //分组
		{
			temp=p[i];
			for(j=i-step;(j>=0)&&(p[j]>temp);j-=step)//(按步长)插入排序
				p[j+step]=p[j];
			p[j+step]=temp;	//插入
		}
	}
}
