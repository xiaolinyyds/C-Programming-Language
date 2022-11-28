#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/* 取余
int main()
{
	int num = 0;
	scanf("%d", &num);

	int a = num / 100;
	int b = num % 100 / 10;
	int c = num % 10;

	printf("个位数为：%d\n十位数为：%d\n百位数为：%d", c,b,a);

	return 0;
}
*//*BMI
int main()
{
	float weight;
	float height;
	
	printf("请输入你的体重(kg):");
	scanf("%f", &weight);

	printf("请输入你的身高(cm):");
	scanf("%f", &height);

	printf("你的身体质量指数BMI为：%.2f\n", weight / ((height / 100) * (height / 100)));

	return 0;
}
*//*销售平均值
int main()
{
	float a,b,c,p;

	printf("请分别输入三个月的销售额：");
	scanf("%f %f %f", &a,&b,&c);
	p = (a + b + c) / 3;
	printf("三个月的平均销售额为：%.2f", p);
    
	return 0;
}
*//*自加自减
int main()
{
	int a = 6;
	printf("++a=%d\n", ++a);
	printf("--a=%d\n", --a);
	printf("a++=%d\n", a++);
	printf("a--=%d\n", a--);
	printf("-a++=%d\n", -a++);
	printf("-a--=%d\n", -a--);

	return 0;
}
*/