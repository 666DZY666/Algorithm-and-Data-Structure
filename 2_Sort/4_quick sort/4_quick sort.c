//��������:ѡ��Ԫ�����Ӽ����֡����ݹ����
//����������ֵ�����������ݲ��á�����������
#include <stdio.h>

void Quick_sort(int *q,int N);
void QuickSort(int *p,int left,int right);

void main()
{
	int i;
	int a[10];
	printf("Please input a sequence\r\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\r\n");
	printf("\r\n");
	printf("The original sequence is\r\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\r\n");
	printf("\r\n");
	Quick_sort(a,10);
	printf("The result is\r\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\r\n");
}

void Quick_sort(int *q,int N)
{
	QuickSort(q,0,N-1);
}

void QuickSort(int *p,int left,int right)
{
	int i,j,temp;
	i=left;				
	j=right;
	//ѡ��Ԫ����������Median3�ȷ���ѡȡ��Ԫ
	temp=p[left];
 	if(left>right)					//!!!�ݹ��������!!!
		return;
	//�Ӽ�����
	while(i!=j)						//similar to BinarySearch|BubbleSort
	{
		while(p[j]>=temp&&j>i)
			j--;
		if(j>i)
			p[i++]=p[j];

		while(p[i]<=temp&&j>i)
			i++;
		if(j>i)
			p[j--]=p[i];
	}
	p[i]=temp;
	//�ݹ����
	QuickSort(p,left,i-1);		//Recursive-Divide
	QuickSort(p,i+1,right);
}