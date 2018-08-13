#include <stdio.h>

#define N 10

void countSort(int A[],int B[],int length);

int main()
{
	int A[N] = {5,1,3,4,6,2,3,1,7,8};
	int B[N];
	int i=0;
	printf("原数列\r\n");
	for(i=0;i<N;i++)
		printf("%d ",A[i]);

	printf("\r\n\r\n");

	countSort(A,B,N);//！！！排序—数组中元素<N！！！

	printf("现数列\r\n");
	for(i=0;i<N;i++)
		printf("%d ",B[i]);

	printf("\r\n");
}

void countSort(int A[],int B[],int length)
{
	int k = 10,i,j;
	int help[10];

	for(i=0;i<k;i++)
		help[i] = 0;
	for(i=0;i<length;i++)
		help[A[i]]++;
	for(j = 1;j<k;j++)
		help[j]+=help[j-1];

	for(i = 0;i<length;i++)
	{
		B[help[A[i]]-1] = A[i];
		help[A[i]]--;
	}
}