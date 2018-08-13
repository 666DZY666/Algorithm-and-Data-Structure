/* Ͱ����

 * ����˵����
 *   a -- ����������
 *   n -- ����a�ĳ���
 *   max -- ����a�����ֵ
 */
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define N 10

void bucket_sort(int a[],int n,int max);

int main()
{
	int a[N]={6,8,7,4,3,2,8,9,2,1};
	int i=0;
	printf("ԭ����\r\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);

	printf("\r\n\r\n");

	bucket_sort(a,N,N);//���򡪻��ڼ�������

	printf("������\r\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);

	printf("\r\n");
}

void bucket_sort(int a[], int n, int max)
{
  int i, j;
  int *buckets;
 
  if (a==NULL || n<1 || max<1)
    return ;
 
  // ����һ������Ϊmax������buckets�����ҽ�buckets�е��������ݶ���ʼ��Ϊ0��
  if ((buckets=(int *)malloc(max*sizeof(int)))==NULL)
    return ;
  memset(buckets, 0, max*sizeof(int));
 
  //����
  for(i = 0; i < n; i++) 
    buckets[a[i]]++; 
 
  //����
  for (i = 0, j = 0; i < max; i++) 
    while( (buckets[i]--) >0 )
      a[j++] = i;
	free(buckets);
}