#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/* 会员等级
int main()
{
	int credit;
	printf("输入您的积分：");
	scanf("%d", &credit);

	if (credit <= 1000)
	{
		printf("尊敬的客户，您是普通会员!\n");
	}
	else
	{
		if (credit <= 5000)
		{
			printf("尊敬的客户，您是银卡会员!\n");
		}
		else
		{
			if (credit <= 10000)
			{
				printf("尊敬的客户，您是金卡会员!\n");
			}
			else
			{
				printf("尊敬的客户，您是贵宾卡会员!\n");
			}
		}
	}

	return 0;
}
*//* 判断位数
int main()
{
	int num;
	printf("请输入一个正整数：");
	scanf("%d", &num);

	if (num < 10)
	{
		printf("%d是1位数", num);
	}
	else
	{
		if (num < 100)
		{
			printf("%d是2位数", num);
		}
		else
		{
			printf("%d是3位数", num);
		}
	}
	return 0;
}
*//* 闰平年判断
int main()
{
	int year, month;
	printf("请输入年份：");
	scanf("%d", &year);
	printf("请输入月份：");
	scanf("%d", &month);
	switch (month)
	{
	 case 1:
	 case 3:
	 case 5:
	 case 7:
	 case 8:
	 case 10:
	 case 12:printf("该月为31天\n"); break;
	 case 4:
	 case 6:
	 case 9:
	 case 11:printf("该月为31天\n"); break;
	 case 2:if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		       printf("该月为29天,且该年为闰年\n");
		    else
		       printf("该月为28天，且该年为平年\n");
		    break;
	}
	return 0;
}
*//* 成绩等级判断
int main()
{
	int score; //成绩
	char grade; //成绩等级
	printf("请输入你的成绩：");
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
	printf("你的成绩等级是：%c\n", grade);
	return 0;
}
*/
