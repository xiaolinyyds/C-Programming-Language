#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/* ȡ��
int main()
{
	int num = 0;
	scanf("%d", &num);

	int a = num / 100;
	int b = num % 100 / 10;
	int c = num % 10;

	printf("��λ��Ϊ��%d\nʮλ��Ϊ��%d\n��λ��Ϊ��%d", c,b,a);

	return 0;
}
*//*BMI
int main()
{
	float weight;
	float height;
	
	printf("�������������(kg):");
	scanf("%f", &weight);

	printf("������������(cm):");
	scanf("%f", &height);

	printf("�����������ָ��BMIΪ��%.2f\n", weight / ((height / 100) * (height / 100)));

	return 0;
}
*//*����ƽ��ֵ
int main()
{
	float a,b,c,p;

	printf("��ֱ����������µ����۶");
	scanf("%f %f %f", &a,&b,&c);
	p = (a + b + c) / 3;
	printf("�����µ�ƽ�����۶�Ϊ��%.2f", p);
    
	return 0;
}
*//*�Լ��Լ�
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