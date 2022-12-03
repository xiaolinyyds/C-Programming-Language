#define _CRT_SECURE_NO_WARNINGS 1
#define PI 3.14159
#include<stdio.h>
/* 阶乘
int main()
{
	int n, i, factor = 1;
	printf("请输入这个数：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		factor = factor * i;
	}
	printf("%d!=%d\n", n, factor);
	return 0;
}
*//* 水仙花数
int main()
{
	int a, b, c, sum;
	printf("所有的水仙花数为：");
	for (sum = 100; sum < 1000; sum++)
	{
		a = sum / 100;
		b = sum % 100 / 10;
		c = sum % 10;
		if (sum == a * a * a + b * b * b + c * c * c)
			printf("%d ", sum);
	}
	return 0;
}
*//* break语句
int main()
{
	float area;
	int r;
	for (r = 1; r <= 10; r++)
	{
		area = PI * r * r;
		if (area > 100)
			break;
		printf("r = %d,area = %.2f\n", r, area);
	}
	return 0;
}
*//* 100-200不能被整除的数
int main()
{
	int n;
	for (n = 100; n <= 200; n++)
	{
		if (n % 3 == 0)
			continue;
		printf("%d ", n);
	}
	return 0;
}
*/