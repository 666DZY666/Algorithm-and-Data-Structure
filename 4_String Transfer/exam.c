//�ַ�����Сдת����
#include <stdio.h>

int main()
{
	char a[100];
	int i,flag,v1=0,v2=0;
	// transfer
	while(1)
	{
		//�������ʹ�Сд������¼
		memset(a,'\0',sizeof(a));
		v1=0;v2=0;
		//�ַ�������
		printf("Please input a string:\r\n");
		scanf("%s",a);
		//��Сд����ͳ��
		i = 0;
		while(a[i] != '\0')
		{
			if(a[i] >= 'A' && a[i] <='Z')
				v1++;
			else if(a[i] >= 'a' && a[i] <='z')
				v2++;
			i++;
		}
		//��Сд�����Ƚ�
		if(v1 > v2)
			flag = 1;
		else
			flag = 0;
		//��Сдת��
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
		//���ת������ַ���
		i = 0;
		while(a[i] != '\0')
		{
			printf("%c",a[i]);
			i++;
		}
		printf("\r\n\r\n");
	}
}