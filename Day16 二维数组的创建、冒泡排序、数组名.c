#include<stdio.h>
#define N 5
/*
int main()
{
	int arr[3][4] = { {1,2}, {3,4}, {4,5} };
	int i = 0;
	int j = 0;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d", arr[i] [j]);
		}
		printf("\n");
	}
	
	return 0;
}
*/
 // ��ά����Ĵ�����int arr[3][4]
 // ��ʼ���� int arr[3][4] = {1��2��3��4}
 //          int arr[3][4] = {{1��2}��{4��5}} 
 // 
 /* ð������ 
int main()
{
	int arr[N];
	int temp, i ,j;
	printf("������5��ͬѧ�ĳɼ���");
	for(i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]); 
	}
	for(i = 0; i < N-1; i++)
	{
		for(j = 0; j < N-1; j++)
		{
			if(arr[j] < arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("��5��ͬѧ��c���Գɼ��ɸߵ�������Ϊ��\t");
	for(i = 0; i < N; i++)
	{
		printf("%d\t",arr[i]);
	}
	

	return 0;
}
*/
 // ��������ʲô��
 // ��������������Ԫ�صĵ�ַ
 // ��2�����⣺
 // 1.sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С����λ���ֽ�
 // 2. &������ - ��������ʾ�������� - ȡ��������������ĵ�ַ 
