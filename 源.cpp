#include<stdio.h>
#include<Windows.h>

int main()
{
	float x, y, a;
	for (y = 1.5; y > -1.5; y -= 0.1)
	{
		for (x = -1.5; x < 1.5; x += 0.05)
		{
			a = x * x + y * y - 1;
			char st = a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ';
			printf("%c", st);
		}
		system("color 0c");
		printf("\n");
	}
	printf("\t                  Love you!\n");
	return 0;
}