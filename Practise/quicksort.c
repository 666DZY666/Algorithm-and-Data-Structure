#include <stdio.h>

void QuickSort(int *p,int n);
void quick_sort(int *m,int l,int r);

int main()
{
	int a[] = {3,1,4,5,1,3,5,4,15,413,4,52,345,23,4523};
	int i;
	QuickSort(a,sizeof(a)/sizeof(a[0]));
	for(i = 0;i < sizeof(a)/sizeof(a[0]);i++)
		printf("%d ",a[i]);
	printf("\r\n");
}

void QuickSort(int *p,int n)
{
	quick_sort(p,0,n - 1);
}

void quick_sort(int *m,int l,int r)
{
	int i = l,j = r;
	int temp = m[l]; 
	if(l > r)
		return;
	while(i != j)
	{
		while(m[j] >= temp && j>i)
			j--;
		if(j > i)
			m[i++] = m[j];
		while(m[i] <= temp && i<j )
			i++;
		if(j > i)
			m[j--] = m[i];
	}
	m[i] = temp;
	quick_sort(m,l,i - 1);
	quick_sort(m,i + 1,r);
}
