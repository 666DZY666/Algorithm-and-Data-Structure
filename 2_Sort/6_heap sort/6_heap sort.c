#include <stdio.h>  
#define N 1000  
#define INF 999999999  
int h[N];  

void heapAdjust(int n,int par);
void createHeap(int n);
void heapSort(int n);

int  main(void)  
{     
    int n, i;  
    scanf("%d", &n);  
    h[0] = INF;  //哨兵—遍历数组结束条件！！！
    for (i = 1; i != n+1; i++) {  
        scanf("%d", &h[i]);  
    }  
    createHeap(n);  
    heapSort(n);  
	printf("\r\n");
    return 0;  
}

//建堆—规模为n的堆，对其父母结点，自底向上自右向左地调整堆  
void createHeap(int n)  
{  
    int i;  
    for (i = n/2; i != 0; i--) 
        heapAdjust(n, i);  
}  
//调整堆(迭代法)—n：规模 i：二叉子堆的堆顶  
void heapAdjust(int n, int par)  
{  
    int tmp, pos, lc, rc;  
    while (par <= n/2) 
	{  
        tmp = h[par]; //记录父母结点键值  
        lc = par<<1;  
        rc = lc+1;  
        pos = par;  
        //父母结点至多更新2次  
        if (h[par] < h[lc]) 
		{  
            h[par] = h[lc];  
            pos = lc;  
        }  
        if (rc <= n && h[par] < h[rc]) 
		{  
            h[par] = h[rc];  
            pos = rc;  
        }  
        if (pos == par) //无更新即无需调整  
            break;  
        else  
            h[pos] = tmp;  
        par = pos; //假设这个位置的结点是“父母结点”  
    }  
}  
//排序
void heapSort(int n)  
{  
    int ntimes = n;  
  
    while (ntimes--) {  
        printf("%d ", h[1]);  
        h[1] = h[n];  
        h[n--] = 0; //堆清零  
        heapAdjust(n, 1);  
    }  
}  
  
