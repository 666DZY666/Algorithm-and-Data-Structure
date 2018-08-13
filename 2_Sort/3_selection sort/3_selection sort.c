#include <stdio.h>

int a[10];
void SelectionSort(int *p,int l);

void main()
{
	while(1)
	{
		int i,n;
		scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
//		n=sizeof(a)/sizeof(int);
		printf("The original sequence is\r\n");
		for(i=0;i<10;i++)
			printf("%d",a[i]);
		printf("\r\n");
		SelectionSort(a,10);
		printf("The result is\r\n");
		for(i=0;i<10;i++)
			printf("%d",a[i]);
		printf("\r\n");
	}
}

void SelectionSort(int *p,int l)
{
	int i,j,v;
	for(i=0;i<l;i++)
	{
		for(j=i;j<l;j++)
		{
			if(p[i]>p[j])
			{
				v=p[i];p[i]=p[j];p[j]=v;
			}
		}
	}
}
