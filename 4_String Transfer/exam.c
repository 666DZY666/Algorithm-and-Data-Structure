//字符串大小写转换器
#include <stdio.h>

int main()
{
	char a[100];
	int i,flag,v1=0,v2=0;
	// transfer
	while(1)
	{
		//清空数组和大小写个数记录
		memset(a,'\0',sizeof(a));
		v1=0;v2=0;
		//字符串输入
		printf("Please input a string:\r\n");
		scanf("%s",a);
		//大小写个数统计
		i = 0;
		while(a[i] != '\0')
		{
			if(a[i] >= 'A' && a[i] <='Z')
				v1++;
			else if(a[i] >= 'a' && a[i] <='z')
				v2++;
			i++;
		}
		//大小写个数比较
		if(v1 > v2)
			flag = 1;
		else
			flag = 0;
		//大小写转换
		if(flag == 1)
		{
			i = 0; 
			while(a[i] != '\0')
			{
				if(a[i] >= 'a' && a[i] <='z')
					a[i] = a[i] - 32;
				i++;
			}
		}
		else if(flag == 0)
		{
			i = 0;
			while(a[i] != '\0')
			{
				if(a[i] >= 'A' && a[i] <='Z')
					a[i] = a[i] + 32;
				i++;
			}
		}
		//输出转换后的字符串
		i = 0;
		while(a[i] != '\0')
		{
			printf("%c",a[i]);
			i++;
		}
		printf("\r\n\r\n");
	}
}