#include <stdio.h>

int a[1000];
void BubbleSort(int *p,int l);

void main()
{
	while(1)
	{
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

		BubbleSort(a,n);

		printf("The result is\r\n");
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\r\n\r\n");
	}
}

void BubbleSort(int *p,int l)
{
	int i,j,v;
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				v=p[j];p[j]=p[j+1];p[j+1]=v;
			}
		}
	
	}
}