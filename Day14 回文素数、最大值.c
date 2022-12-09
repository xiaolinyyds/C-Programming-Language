#include<stdio.h>
/* 回文素数
int main()
{
	int i, j;
	for (i = 2; i < 1000; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			if (i / 10 == i % 10 || i / 100 == i % 10)
				printf("%d ", i);
		}
	}
	return 0;
}
*//* 10数最大值
int main()
{
	int i, max, a[10], p = 0;
	printf("input 10 numbers: \n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	max = a[0];
	for (i = 1; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			p = i;
		}
	}
	printf("maxnum=%d,index=%d\n", max, p);
	return 0;
}
*/
