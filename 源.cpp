#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/* ��������
int main()
{
	int num,num1;
	scanf("%d %d", &num, &num1);
	if (num > num1) {
		int temp = num;//temp:��ʱ����
		num = num1;
		num1 = temp;
	}
	printf("�����Ϊ:%d %d\n", num, num1);

	return 0;
}
*//* ȡ����ֵ��1
int main()
{
	int num;
	scanf("%d", &num);
	if (num > 0) {
		printf("����ֵΪ:%d", num);
	}
	else {
		printf("����ֵΪ:%d", num * -1);
	}

	return 0;
}
*//* ȡ����ֵ��2
int main()
{
	int num;
	printf("������һ����: ");
	scanf("%d", &num);
	if (num < 0)
	{
		num = -num;
	}
	printf("������ľ���ֵΪ: %d", num);
	return 0;
}
*//* ��нˮ
int main()
{
	int timer;//�ܹ���ʱ��
	float Wmoney;//��нˮ
	const int WDATE = 40;//ÿ�ܱ�׼����ʱ��
	const float MONEY = 8.25;//ÿСʱ����
	scanf("%d", &timer);
	if (timer > WDATE) {
		Wmoney = WDATE * MONEY + (timer - WDATE) * MONEY *1.5;
	}
	else {
		Wmoney = timer * MONEY;
	}
	printf("��нˮΪ:%.2f\n", Wmoney);

	return 0;
}
*//* ����ץ��
int main()
{
	int S;
	printf("�������������ٶ�:");
	scanf("%d", &S);
	if (S > 60) {
		printf("%d���ѳ���",S);
	}
	else {
		printf("%d�ٶ�����",S);
	}

	return 0;
}
*//*
int main()
{
	int num, num1, num2=0 ;
	printf("������Ҫ�ȴ�С����������:");
	scanf("%d %d %d", &num, &num1, &num);
	int max = 0;

	if (num > num1){
		if (num > num2){
			max = num;
		}
		else {
			max = num2;
		}
	}
	else{
		if (num1 > num2) {
			max = num1;
		}
		else {
			max=num2;
		}
	}
	printf("max=%d\n", max);

	return 0;
}
*/