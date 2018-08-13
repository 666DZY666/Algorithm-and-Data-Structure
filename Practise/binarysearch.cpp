//二分查找——时间复杂度：logn
#include <stdio.h>

void binarysearch(int *p,int n,int v);

void main()
{
	int v;
	int a[10]={1,2,243,4,3,6,7,8345,9,234};
	while(1)
	{
		printf("Please input search value\r\n");
		scanf("%d",&v);
		binarysearch(a,10,v);
	}
}

void binarysearch(int *p ,int n ,int v)
{
	int l = 0,r = n-1,mid;
	while(l <= r)
	{
		mid = (l+r)/2;
		if(v > p[mid])
			l = mid+1; 
		else if(v < p[mid])
			r = mid-1;
		else
		{
			printf("the search one's location is: %d\r\n\r\n",mid+1);
			return;
		}
	}
	printf("not find!\r\n\r\n");
}