#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/* �ж���ż
int main()
{
	int m;
	scanf("%d", &m);
	if (m % 2 == 0)
	{
		printf("%d is ż��\n", m);
	}
	else
	{
		printf("%d is ����\n", m);
	}

	return 0;
}
*//* ����������ȴ�С
int main()
{
	int a, b;
	printf("input two numbers: ");
	scanf("%d %d", &a, &b);
	printf("max=%d\n", a > b ? a : b);
	return 0;
}
*//* 3��5������1
int main()
{
	int num;
	printf("������һ��������");
	scanf("%d", &num);
	if (num % 3 == 0)
	{
		if (num % 5 == 0) {
			printf("%d�ܱ�3��5����\n", num);
		}
		else {
			printf("%d���ܱ�3��5ͬʱ����\n", num);
		}
	}
	else {
		printf("%d���ܱ�3��5����\n", num);
	}
	return 0;
}
*//* 3��5������2
int main()
{
	int num;
	printf("������һ��������");
	scanf("%d", &num);
	if (num % 3 == 0 && num % 5 == 0)
	{
		printf("%d�ܱ�3��5ͬʱ����\n",num);
	}
	else
	{
		printf("%d���ܱ�3��5����\n", num);
	}
	return 0;
}
*//* ��Ա�ۿ�
int main()
{
	char isMember;
	double prire, money; //�����Ӧ�����
	const double ZK1 = 0.95, ZK2 = 0.98;

	printf("�ͻ��Ƿ�Ϊ��Ա(y|n): ");
	scanf("%c", &isMember);
	printf("�����뱾�ι����ܽ�");
	scanf("%lf", &prire);

	if (isMember == 'y')
	{
		if (prire > 1000)
		{
			money = prire * ZK1;
		}
		else
		{
			money = prire * ZK2;
		}
	}
	else
	{
		if (prire > 1000)
		{
			money = prire * ZK2;
		}
		else
		{
			money = prire;
		}
	}
	printf("Ӧ֧�����Ϊ��%.2f\n", money);

	return 0;
}
*//* ����Ʊ��
int main()
{
	int month, age, price, money;
	printf("�����뵱ǰ�·�: ");
	scanf("%d", &month);
	printf("����������ǰ������: ");
	scanf("%d", &age);
	printf("�����뵱ǰƱ��: ");
	scanf("%d", &price);
	const double ZK1 = 0.5, ZK2 = 0.8;


	if (age > 65 && age < 14)
	{
		if (age > 65)
		{
			money = 0;
		}
		else {
			money = price * ZK1;
		}
	}
	else
	{
		if (month >= 5 && month <= 10)
		{
			money = price;
		}
		else
		{
			money = price * ZK2;
		}
	}

	printf("Ӧ֧�����Ϊ��%d\n", money);

	return 0;
}
*/