#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/* 判断奇偶
int main()
{
	int m;
	scanf("%d", &m);
	if (m % 2 == 0)
	{
		printf("%d is 偶数\n", m);
	}
	else
	{
		printf("%d is 奇数\n", m);
	}

	return 0;
}
*//* 条件运算符比大小
int main()
{
	int a, b;
	printf("input two numbers: ");
	scanf("%d %d", &a, &b);
	printf("max=%d\n", a > b ? a : b);
	return 0;
}
*//* 3、5整除法1
int main()
{
	int num;
	printf("请输入一个整数：");
	scanf("%d", &num);
	if (num % 3 == 0)
	{
		if (num % 5 == 0) {
			printf("%d能被3和5整除\n", num);
		}
		else {
			printf("%d不能被3和5同时整除\n", num);
		}
	}
	else {
		printf("%d不能被3和5整除\n", num);
	}
	return 0;
}
*//* 3、5整除法2
int main()
{
	int num;
	printf("请输入一个整数：");
	scanf("%d", &num);
	if (num % 3 == 0 && num % 5 == 0)
	{
		printf("%d能被3和5同时整除\n",num);
	}
	else
	{
		printf("%d不能被3和5整除\n", num);
	}
	return 0;
}
*//* 会员折扣
int main()
{
	char isMember;
	double prire, money; //购物金额、应付金额
	const double ZK1 = 0.95, ZK2 = 0.98;

	printf("客户是否为会员(y|n): ");
	scanf("%c", &isMember);
	printf("请输入本次购物总金额：");
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
	printf("应支付金额为：%.2f\n", money);

	return 0;
}
*//* 景点票价
int main()
{
	int month, age, price, money;
	printf("请输入当前月份: ");
	scanf("%d", &month);
	printf("请输入您当前的年龄: ");
	scanf("%d", &age);
	printf("请输入当前票价: ");
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

	printf("应支付金额为：%d\n", money);

	return 0;
}
*/