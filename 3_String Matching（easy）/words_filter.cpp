/************字符串匹配（暴力匹配）**************/
#include <stdio.h>
#include <string.h>
//变量定义
int i=0,j=0,f=0,f1=0;
char a[100],b[100];
//主函数
void main()
{
	while(1)
	{
		//清空数组
		memset(a,'\0',sizeof(a));
		//提示输入
		printf("Please input two string\r\n");
		scanf("%s",a);
		scanf("%s",b);
		//比较输入字符串的长度
		if(strlen(a) != strlen(b))
			printf("!Not have words changing!\r\n\r\n");
		//匹配
		else
		{
			i = 0;j = 0;
			//遍历第一个字符串
			while(a[i] != '\0')
			{
				f1 = f;
				//遍历第二个字符串
				while(b[j] != '\0')
				{
					//字符匹配（记录）
					if(a[i] == b[j])
					{
						f++;
						//处理相同字符的情况
						b[j] = 1;
						break;
					}
					j++;
				}
				j = 0;
				//有一个字符不匹配则认为字符串不匹配
				if(f == f1)
					break;
				i++;
			}
			//判断字符串是否匹配
			if(f == strlen(a))
				printf("!!Have words changing!!\r\n\r\n");
			else
				printf("!Not have words changing!\r\n\r\n");
			i = 0;
			f = 0;
		}
	}
}

