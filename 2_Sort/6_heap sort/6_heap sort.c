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
    h[0] = INF;  //�ڱ������������������������
    for (i = 1; i != n+1; i++) {  
        scanf("%d", &h[i]);  
    }  
    createHeap(n);  
    heapSort(n);  
	printf("\r\n");
    return 0;  
}

//���ѡ���ģΪn�Ķѣ����丸ĸ��㣬�Ե�������������ص�����  
void createHeap(int n)  
{  
    int i;  
    for (i = n/2; i != 0; i--) 
        heapAdjust(n, i);  
}  
//������(������)��n����ģ i�������ӶѵĶѶ�  
void heapAdjust(int n, int par)  
{  
    int tmp, pos, lc, rc;  
    while (par <= n/2) 
	{  
        tmp = h[par]; //��¼��ĸ����ֵ  
        lc = par<<1;  
        rc = lc+1;  
        pos = par;  
        //��ĸ����������2��  
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
        if (pos == par) //�޸��¼��������  
            break;  
        else  
            h[pos] = tmp;  
        par = pos; //�������λ�õĽ���ǡ���ĸ��㡱  
    }  
}  
//����
void heapSort(int n)  
{  
    int ntimes = n;  
  
    while (ntimes--) {  
        printf("%d ", h[1]);  
        h[1] = h[n];  
        h[n--] = 0; //������  
        heapAdjust(n, 1);  
    }  
}  
  
