#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 1��100��� while��
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
*//* 1��100��� do...while��:����ִ��һ��
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
*//* 1��100��� for��
int main()
{
	int i, sum = 0;
	for (i = 1; i <= 100; i++)
		sum = sum + i;
	printf("%d\n", sum);
	return 0;
}
*//* ���������
int main()
{
	int grade, k = 1; // ��Ʒ��������һ����Ʒ
	int sum = 0; // ��Ʒ����
	float money = 0.0; // ��Ʒ���
	printf("���ι����˼�����Ʒ��");
	scanf("%d", &grade);
	while (grade > 0)
	{
		float price;
		int num;
		printf("�����%d����Ʒ�ĵ��ۣ�", k);
		scanf("%f", &price);
		printf("�����%d����Ʒ�Ĺ���������", k);
		scanf("%d", &num);
		sum += num;
		money += price * num;
		grade--;
		k++;
	}
	printf("���ι�����Ʒ����������%d\t�ܼ�:%.2f\n", sum, money);
	return 0;
}
*/
int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("����Ѿ������һ��1��100���������������һ���������Ϸ�ɣ�\n");
	do {
		printf("���һ��1��100����Ŷ��������");
		scanf("%d", &a);
		count++;
		if (a > number) {
			printf("������´��ˣ�������");
		}
		else {
			if (a < number) {
				printf("��µ���С�ˣ�������");
			}
		}
	} while (a != number);
	printf("̫���ˣ�������%d�ξͲµ��˴𰸣�������������㰮������\n", count);
	return 0;
}
/* ��ǰn���
int main()
{
	double a = 1, b = 2, sum=0; // a�Ƿ��ӣ�b�Ƿ�ĸ
	int num;
	printf("������ǰ����ͣ�");
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