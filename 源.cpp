#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;

	printf("���������ʱ�䣺");
	scanf("%d %d", &hour1, &minute1);
	printf("�����뵽��ʱ�䣺");
	scanf("%d %d", &hour2, &minute2);

	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	int t = t2 - t1;
	printf("�Ӽҵ�ѧУ��Ҫ%dСʱ%d����\n",t/60,t%60);

	return 0;
}