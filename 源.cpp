#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/* ��Ա�ȼ�
int main()
{
	int credit;
	printf("�������Ļ��֣�");
	scanf("%d", &credit);

	if (credit <= 1000)
	{
		printf("�𾴵Ŀͻ���������ͨ��Ա!\n");
	}
	else
	{
		if (credit <= 5000)
		{
			printf("�𾴵Ŀͻ�������������Ա!\n");
		}
		else
		{
			if (credit <= 10000)
			{
				printf("�𾴵Ŀͻ������ǽ𿨻�Ա!\n");
			}
			else
			{
				printf("�𾴵Ŀͻ������ǹ������Ա!\n");
			}
		}
	}

	return 0;
}
*//* �ж�λ��
int main()
{
	int num;
	printf("������һ����������");
	scanf("%d", &num);

	if (num < 10)
	{
		printf("%d��1λ��", num);
	}
	else
	{
		if (num < 100)
		{
			printf("%d��2λ��", num);
		}
		else
		{
			printf("%d��3λ��", num);
		}
	}
	return 0;
}
*//* ��ƽ���ж�
int main()
{
	int year, month;
	printf("��������ݣ�");
	scanf("%d", &year);
	printf("�������·ݣ�");
	scanf("%d", &month);
	switch (month)
	{
	 case 1:
	 case 3:
	 case 5:
	 case 7:
	 case 8:
	 case 10:
	 case 12:printf("����Ϊ31��\n"); break;
	 case 4:
	 case 6:
	 case 9:
	 case 11:printf("����Ϊ31��\n"); break;
	 case 2:if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		       printf("����Ϊ29��,�Ҹ���Ϊ����\n");
		    else
		       printf("����Ϊ28�죬�Ҹ���Ϊƽ��\n");
		    break;
	}
	return 0;
}
*//* �ɼ��ȼ��ж�
int main()
{
	int score; //�ɼ�
	char grade; //�ɼ��ȼ�
	printf("��������ĳɼ���");
	scanf("%d", &score);

	switch (score/10)
	{
	  case 0:
	  case 1:
	  case 2:
	  case 3:
	  case 4:
	  case 5:grade = 'D'; break;
	  case 6:grade = 'C'; break;
	  case 7:
	  case 8:grade = 'B'; break;
	  case 9:
	  case 10:grade = 'A'; break;
	}
	printf("��ĳɼ��ȼ��ǣ�%c\n", grade);
	return 0;
}
*/
