#include <stdio.h>

void BubbleSort(int *p,int l);

void main()
{
	int a[17]={4,7,3,1,4,8,9,0,7,6,0,1,2,3,4,5,6};
	int b=0,c=0;
//	b=sizeof(a);
	printf("The original sequence is\r\n");
	for(c=0;c<17;c++)
		printf("%d",a[c]);
	printf("\r\n");

	BubbleSort(a,17);

	printf("The result is\r\n");
	for(c=0;c<17;c++)
		printf("%d",a[c]);
	printf("\r\n");
}

void BubbleSort(int *p,int l)
{
	int i,j,v;
	for(i=0;i<l;i++)
	{
		for(j=0;j<16-i;j++)
		{
			if(p[j]>p[j+1])
			{
				v=p[j];p[j]=p[j+1];p[j+1]=v;
			}
		}
	
	}
}