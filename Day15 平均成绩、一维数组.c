#include<stdio.h>
#define N 10 
/* ƽ���ɼ� 
{
	int score[10];
	int i, sum = 0;
	float ave = 0;
	int cnt = 0;
	printf("������10��ͬѧ��c���Գɼ���\n");
	for(i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);
		printf("%d,%d", i, score[i]);
		sum += score[i];
	}
	ave = sum * 1.0 / N;
	printf("�༶c���Ե�ƽ���ɼ�λ%f\n", ave);
	for(i = 0; i < N; i++)
	{
		if(score[i] > ave)
		cnt++;
	}
	printf("��%d��ͬѧ�ɼ�����ƽ���ɼ�",cnt); 
	return 0;
}
*/

	//[]���±����ò�����
	//������ʹ���±������ʵģ��±��Ǵ�0��ʼ��
	//����Ĵ�С����ͨ������õ������㷽��:int sz = sizeof(arr) / sizeof(arr[0]) 
	//%p�ǰ���ַ�ĸ�ʽ��ӡ-ʮ�����ƴ�ӡ
	//��������������Ԫ�صĵ�ַ
