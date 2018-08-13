#include <stdio.h>

int a[]={0,1,2,3,4,5,6,7,8,9,10,90,100,234,345345,456465456456};
int BinarySearch(int *p,int x,int l);

void main()
{
	int result,v;
	while(1)
	{
		printf("Please input number to search\r\n");
		scanf("%d",&v);
		result=BinarySearch(a,v,sizeof(a)/sizeof(0));

		if(result == -1)
			printf("The number is not found \r\n");
		else
			printf("The location is %d \r\n",result);
	}
}

int BinarySearch(int *p,int x,int l)
{
	int left,right,mid;
	left = 0;
	right = l-1;
	while(left<=right)
	{
		mid = (left+right)/2;
		if(x < p[mid])
			right = mid - 1;
		else if(x > p[mid])
			left = mid + 1;
		else
			return mid+1;
	}
	return -1;
}