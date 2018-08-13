/* 桶排序

 * 参数说明：
 *   a -- 待排序数组
 *   n -- 数组a的长度
 *   max -- 数组a中最大值
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
	printf("原数列\r\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);

	printf("\r\n\r\n");

	bucket_sort(a,N,N);//排序—基于计数排序

	printf("现数列\r\n");
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
 
  // 创建一个容量为max的数组buckets，并且将buckets中的所有数据都初始化为0。
  if ((buckets=(int *)malloc(max*sizeof(int)))==NULL)
    return ;
  memset(buckets, 0, max*sizeof(int));
 
  //计数
  for(i = 0; i < n; i++) 
    buckets[a[i]]++; 
 
  //排序
  for (i = 0, j = 0; i < max; i++) 
    while( (buckets[i]--) >0 )
      a[j++] = i;
	free(buckets);
}