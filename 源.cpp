#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/* 会员信息输入输出
int main()
{
	int id, age;
	char sex;

	printf("请输入会员的基本信息：\n");
	printf("输入会员编号：");
	scanf("%d", &id);
	getchar();
	printf("请输入会员的性别(M:男,F:女)：");
	sex = getchar();
	printf("请输入会员年龄：");
	scanf("%d", &age);

	printf("\n会员的基本信息如下：\n");
	printf("ID\tSex\tAge\n");
	printf("%d\t%c\t%d\n",id,sex,age);
	
	return 0;
}
*//* ACSII值
int main()
{
	char ch;
	ch = getchar();

	printf("%c\t%d\n", ch, ch);
	printf("%c\t%d\n", ch - 32, ch - 32);

	return 0;
}
*/
