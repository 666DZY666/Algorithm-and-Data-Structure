/************�ַ���ƥ�䣨����ƥ�䣩**************/
#include <stdio.h>
#include <string.h>
//��������
int i=0,j=0,f=0,f1=0;
char a[100],b[100];
//������
void main()
{
	while(1)
	{
		//�������
		memset(a,'\0',sizeof(a));
		//��ʾ����
		printf("Please input two string\r\n");
		scanf("%s",a);
		scanf("%s",b);
		//�Ƚ������ַ����ĳ���
		if(strlen(a) != strlen(b))
			printf("!Not have words changing!\r\n\r\n");
		//ƥ��
		else
		{
			i = 0;j = 0;
			//������һ���ַ���
			while(a[i] != '\0')
			{
				f1 = f;
				//�����ڶ����ַ���
				while(b[j] != '\0')
				{
					//�ַ�ƥ�䣨��¼��
					if(a[i] == b[j])
					{
						f++;
						//������ͬ�ַ������
						b[j] = 1;
						break;
					}
					j++;
				}
				j = 0;
				//��һ���ַ���ƥ������Ϊ�ַ�����ƥ��
				if(f == f1)
					break;
				i++;
			}
			//�ж��ַ����Ƿ�ƥ��
			if(f == strlen(a))
				printf("!!Have words changing!!\r\n\r\n");
			else
				printf("!Not have words changing!\r\n\r\n");
			i = 0;
			f = 0;
		}
	}
}

