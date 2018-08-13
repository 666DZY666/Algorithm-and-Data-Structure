#include <stdio.h>
#define n 16

void InsertSort(int *p,int l);

void main()
{
	int i;
	int a[n];
	printf("Please input a sequence\r\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\r\n");
	printf("\r\n");
	printf("The original sequence is\r\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\r\n");
	printf("\r\n");
	InsertSort(a,n);
	printf("The result is\r\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\r\n");
}

void InsertSort(int *p,int l)
{
	int i,j,temp;
	for(i=1;i<l;i++)
	{
		temp=p[i];
		for(j=i-1;j>=0;j--)
		{
			if(p[j]>temp)
				p[j+1]=p[j];
			else
				break;
		}
		p[j+1]=temp;
	}
}