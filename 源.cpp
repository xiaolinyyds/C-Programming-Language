#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/* �����ж�
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int isPrime = 1;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			isPrime = 0;
			break;
		}
	}
	if (isPrime == 1)
	{
		printf("%d������\n", n);
	}
	else
	{
		printf("%d��������\n", n);
	}

	return 0;
}
*//* �˷��ھ�
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}
*//* �ټ���Ǯ
int main()
{
	int cock, hen, chiken;
	for (cock = 0; cock <= 20; cock++)
	{
		for (hen = 0; hen <= 33; hen++)
		{
			for (chiken = 0; chiken <= 100; chiken++) // ��Ϊchiken = 100 - cock - hen;���и���
			{
				if ((5 * cock + 3 * hen + chiken / 3.0 == 100) && (cock + hen + chiken == 100))
					printf("cock=%2d,hen=%2d,chiken=%2d\n", cock, hen, chiken);
			}
		}
	}
	return 0;
}
*//* ��Ӳ��(������goto���)
int main()
{
	int one, two, five;
	int x;
	scanf("%d", &x);
	for (one = 1; one <= x * 10; one++)
	{
		for (two = 1; two <= x * 10 / 2; two++)
		{
			for (five = 1; five <= x * 10 / 5; five++)
			{
				if (one + two * 2 + five * 5 == x * 10)
				{
					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n", one, two, five,x); // ��goto out; ֻ���һ�ֽ��
				}
			}
		}
	}
	return 0; // ��out:
}
*//* ��Ӳ��(break���)
int main()
{
	int one, two, five;
	int x, exit = 0;
	scanf("%d", &x);
	for (one = 1; one <= x * 10; one++)
	{
		for (two = 1; two <= x * 10 / 2; two++)
		{
			for (five = 1; five <= x * 10 / 5; five++)
			{
				if (one + two * 2 + five * 5 == x * 10)
				{
					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n", one, two, five, x);
					exit = 1;
					break;
				}
			}
			if (exit == 1) break;
		}
		if (exit == 1) break;
	}
	return 0;
}
*/