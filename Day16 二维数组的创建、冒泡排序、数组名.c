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
 // 二维数组的创建：int arr[3][4]
 // 初始化： int arr[3][4] = {1，2，3，4}
 //          int arr[3][4] = {{1，2}，{4，5}} 
 // 
 /* 冒泡排序 
int main()
{
	int arr[N];
	int temp, i ,j;
	printf("请输入5名同学的成绩：");
	for(i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]); 
	}
	for(i = 0; i < N-1; i++) // 控制比较轮数 
	{
		for(j = 0; j < N - 1 - i; j++) // 控制比较次数
		{
			if(arr[j] < arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("这5名同学的c语言成绩由高到低排序为：\t");
	for(i = 0; i < N; i++)
	{
		printf("%d\t",arr[i]);
	}
	

	return 0;
}
*/
 // 数组名是什么？
 // 数组名是数组首元素的地址
 // 有2个例外：
 // 1.sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小，单位是字节
 // 2. &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址 
