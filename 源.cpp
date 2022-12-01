#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 1—100相加 while法
int main()
{
	int i, sum = 0;
	i = 1;
	while (i <= 3)
	{
		sum = sum + i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}
*//* 1—100相加 do...while法:至少执行一次
int main()
{
	int i, sum = 0;
	i = 1;
	do {
		sum = sum + i;
		i++;
	} while (i <= 100);
	printf("%d\n", sum);
	return 0;
}
*//* 1—100相加 for法
int main()
{
	int i, sum = 0;
	for (i = 1; i <= 100; i++)
		sum = sum + i;
	printf("%d\n", sum);
	return 0;
}
*//* 购物计算器
int main()
{
	int grade, k = 1; // 商品数量、第一种商品
	int sum = 0; // 商品数量
	float money = 0.0; // 商品金额
	printf("本次购买了几种商品：");
	scanf("%d", &grade);
	while (grade > 0)
	{
		float price;
		int num;
		printf("输入第%d种商品的单价：", k);
		scanf("%f", &price);
		printf("输入第%d种商品的购买数量：", k);
		scanf("%d", &num);
		sum += num;
		money += price * num;
		grade--;
		k++;
	}
	printf("本次购买商品的总数量：%d\t总价:%.2f\n", sum, money);
	return 0;
}
*/
int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("姐姐已经想好了一个1到100的数，快来跟姐姐一起玩猜数游戏吧！\n");
	do {
		printf("请猜一个1到100的数哦，宝贝：");
		scanf("%d", &a);
		count++;
		if (a > number) {
			printf("你的数猜大了，宝贝。");
		}
		else {
			if (a < number) {
				printf("你猜的数小了，宝贝。");
			}
		}
	} while (a != number);
	printf("太好了，你用了%d次就猜到了答案，你真厉害，姐姐爱死你了\n", count);
	return 0;
}
/* 求前n项和
int main()
{
	double a = 1, b = 2, sum=0; // a是分子，b是分母
	int num;
	printf("你想求前几项和：");
	scanf("%d", &num);
	while (num)
	{
		sum += a / b;
		b = a + b;
		a = b - a;
		num--;
	}
	printf("sum=%.4f\n", sum);
	return 0;
}
*/