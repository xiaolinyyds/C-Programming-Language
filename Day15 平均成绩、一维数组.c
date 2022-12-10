#include<stdio.h>
#define N 10 
/* 平均成绩 
{
	int score[10];
	int i, sum = 0;
	float ave = 0;
	int cnt = 0;
	printf("请输入10名同学的c语言成绩：\n");
	for(i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);
		printf("%d,%d", i, score[i]);
		sum += score[i];
	}
	ave = sum * 1.0 / N;
	printf("班级c语言的平均成绩位%f\n", ave);
	for(i = 0; i < N; i++)
	{
		if(score[i] > ave)
		cnt++;
	}
	printf("有%d个同学成绩高于平均成绩",cnt); 
	return 0;
}
*/

	//[]是下标引用操作符
	//数组是使用下标来访问的，下标是从0开始的
	//数组的大小可以通过计算得到，计算方法:int sz = sizeof(arr) / sizeof(arr[0]) 
	//%p是按地址的格式打印-十六进制打印
	//数组名是数组首元素的地址
